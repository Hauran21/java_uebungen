import cv2
import os
import numpy as np
from PIL import Image, ImageOps

#https://pyimagesearch.com/2014/08/04/opencv-python-color-detection/
#https://docs.opencv.org/3.4/dd/d49/tutorial_py_contour_features.html
#https://theailearner.com/tag/cv2-minarearect/

#green: 43, 80 48
#red: 65, 0, 0,
#yellow: 92, 86, 0
#blue: 0, 29, 52
#bgr:
COLOR_BOUNDARIES = {
    "red" : ([17, 15, 100], [50, 56, 200]),
    "blue": ([110, 50, 0], [150, 90, 90]),
    "yellow": ([0, 210, 225], [80 , 240, 250]),
    "green": ([50, 120, 10], [100, 250, 80])
}

# Ziel-Farben als BGR (deine Referenz, z.B. Foto bei „neutralem“ Licht)
TARGETS_BGR = {
    "red":    ( 60,  60, 200),
    "yellow": ( 40, 220, 240),
    "green":  ( 100, 200,  100),
    "blue":   (180,  80,  30),
}

kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (3,3))

def bgr_to_lab(bgr):
    arr = np.uint8([[bgr]])
    return cv2.cvtColor(arr, cv2.COLOR_BGR2LAB)[0,0,:].astype(np.float32)

TARGETS_LAB = {k: bgr_to_lab(v) for k,v in TARGETS_BGR.items()}

def median_lab_in_mask(img_bgr, mask):
    img_lab = cv2.cvtColor(img_bgr, cv2.COLOR_BGR2LAB)
    L = img_lab[:,:,0][mask>0].astype(np.float32)
    A = img_lab[:,:,1][mask>0].astype(np.float32)
    B = img_lab[:,:,2][mask>0].astype(np.float32)
    if L.size == 0:
        return None
    return np.array([np.median(L), np.median(A), np.median(B)], np.float32)

def closest_color_lab(lab, targets=TARGETS_LAB, max_de=25.0):
    best, best_de = None, 1e9
    for name, t in targets.items():
        de = np.linalg.norm(lab - t)  # CIE76
        if de < best_de:
            best_de, best = de, name
    return best if best_de <= max_de else None

def classify_color_lab(img_bgr, contours):
    names = []
    for cnt in contours:
        rect = cv2.minAreaRect(cnt)
        box  = cv2.boxPoints(rect).astype(np.int32)
        mask = np.zeros(img_bgr.shape[:2], np.uint8)
        cv2.drawContours(mask, [box], -1, 255, thickness=cv2.FILLED)

        lab = median_lab_in_mask(img_bgr, mask)
        if lab is None:
            names.append(None); continue
        names.append(closest_color_lab(lab))
    return tuple(names)


def draw_contour_box(image, contours, color=((0, 0, 255))):
    for cnt in contours:
        rect = cv2.minAreaRect(cnt)
        box = cv2.boxPoints(rect)
        box = np.intp(box)
        cv2.drawContours(image,[box],0,color,2)

def get_contour_color(image, contours, boundaries=COLOR_BOUNDARIES):

    detected_colors = []

    for cnt in contours:
        rect = cv2.minAreaRect(cnt)
        cnt = cv2.boxPoints(rect)
        cnt = np.intp(cnt)

        mask = np.zeros_like(image)     #Leeres Beild derselbne Größe erstellen.
        cv2.drawContours(mask, [cnt], -1, (255, 255, 255), thickness=cv2.FILLED)

        masked_cnt = cv2.bitwise_and(image, mask)
        found = False
        for color_name in boundaries.keys():
            lower = np.array(boundaries[color_name][0], dtype="uint8")
            upper = np.array(boundaries[color_name][1], dtype="uint8")
            imag_color_detect = cv2.inRange(masked_cnt, lower, upper)
            if (sum(sum(imag_color_detect)) > 0):
                detected_colors.append(color_name)
                found = True
                break
        if (not found):
            detected_colors.append(None)

    return tuple(detected_colors)

def put_contour_text(image, contours, text):
    centroids = get_contour_centroids(image, contours)
    for i, centroid in enumerate(centroids):
        cv2.putText(image, text[i], centroid, cv2.FONT_HERSHEY_SIMPLEX, 
                        1.0, (255,255,255), 1, cv2.LINE_AA)
        
def get_contour_centroids(image, contours):
    centroids = []
    for cnt in contours:
        box = cv2.minAreaRect(cnt)
        box = cv2.boxPoints(box)
        box = np.intp(box)

        M = cv2.moments(box)
        cx = int(M['m10']/M['m00'])
        cy = int(M['m01']/M['m00'])
        centroids.append((cx, cy))
    return centroids

def get_contour(image):

    
    img_gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    #falls die kamera stark rauscht.
    # img_gray = cv2.GaussianBlur(img_gray, (3,3), 0)
    edges = cv2.Canny(img_gray, 200, 700)# 200, 700
    contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    

    # lab = cv2.cvtColor(image, cv2.COLOR_BGR2Lab)
    # L, a, b = cv2.split(lab)
    # # Kanten im b-Kanal (Blau hat geringere b-Werte als neutral/schwarz)
    # edges = cv2.Canny(b, 20, 70)  # niedriger ansetzen als bei Grau
    # contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    
    # ycc = cv2.cvtColor(image, cv2.COLOR_BGR2YCrCb)
    # Y, Cr, Cb = cv2.split(ycc)
    # edges = cv2.Canny(Cb, 20, 100)
    # edges = cv2.morphologyEx(edges, cv2.MORPH_CLOSE, cv2.getStructuringElement(cv2.MORPH_ELLIPSE,(3,3)), 1)

    # contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    
    # cv2.drawContours(img_gray,contours,-1,(0, 255, 0),2)
    # cv2.imshow("alle konturen", img_gray)



    contours_with_min_area = []
    for cnt in contours:
        rect = cv2.minAreaRect(cnt)
        width = rect[1][0]
        height = rect[1][1]
        if (width > 100) and (height > 100):
            contours_with_min_area.append(cnt)

    closed_contours = []
    open_contours = []

    cv2.drawContours(img_gray,contours_with_min_area,-1,(0, 255, 0),2)
    cv2.imshow("test", img_gray)
    for cnt in contours_with_min_area:
        # dünne Linienmaske nur für diese Kontur
        mask = np.zeros(edges.shape, dtype=np.uint8)
        cv2.drawContours(mask, [cnt], -1, 255, 1)  # Linienbreite 1

        # Nachbaranzahl inkl. Pixel selbst (3x3 Summe)
        nb = cv2.filter2D((mask > 0).astype(np.uint8), -1, np.ones((3,3), np.uint8))
        # Endpunkte: Pixel der Kontur mit genau einem Nachbarn -> Summe == 2 (1 Nachbar + Pixel selbst)
        endpoints = np.logical_and(mask == 255, nb == 2)

        if endpoints.any():
            open_contours.append(cnt)
        else:
            closed_contours.append(cnt)

    print(f"geschlossen: {len(closed_contours)}, offen: {len(open_contours)}")

    # print(f"Anzahl geschlossener Konturen: {len(closed_contours)}")
    #closed_contours = [cnt for cnt in contours if cv2.contourArea(cnt) > 10]
    #draw_contour_box(img_gray, contours_with_min_area, color=(0, 255, 0))
    

    return closed_contours

def classify_closed_contours(image):
    # Vorverarbeitung
    img_gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    img_gray = cv2.GaussianBlur(img_gray, (3,3), 0)
    edges = cv2.Canny(img_gray, 100, 200)
    edges = cv2.morphologyEx(edges, cv2.MORPH_CLOSE, kernel, iterations=1)

    # Endpunkte-Map EINMAL global
    bin_edges = (edges > 0).astype(np.uint8)
    nb = cv2.filter2D(bin_edges, -1, np.ones((3,3), np.uint8))
    endpoints_map = (bin_edges == 1) & (nb == 2)

    contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    closed, open_ = [], []
    for cnt in contours:
        # 1) superschnell: Bounding-Box & Extent
        x,y,w,h = cv2.boundingRect(cnt)
        if w*h < 200:                 # sehr kleine Boxen weg
            continue
        area = cv2.contourArea(cnt)
        if area < 100:                # echte Fläche erzwingen
            continue
        extent = area / (w*h)         # Füllgrad in BBox
        if extent < 0.2:              # sehr lange, dünne Kanten raus
            continue

        # 2) (optional) Solidity gegen fransige Kanten
        # hull = cv2.convexHull(cnt)
        # if area / cv2.contourArea(hull) < 0.6:
        #     continue

        # 3) Endpunkt-Prüfung nur noch für gefilterte Kandidaten
        pts = cnt.reshape(-1, 2)
        ys = np.clip(pts[:,1], 0, endpoints_map.shape[0]-1)
        xs = np.clip(pts[:,0], 0, endpoints_map.shape[1]-1)
        has_endpoint = endpoints_map[ys, xs].any()

        if has_endpoint:
            open_.append(cnt)
        else:
            closed.append(cnt)

    return closed, open_



def main_test():
    p = "baukloetze_small.jpg"
    img = cv2.imread(p, cv2.IMREAD_UNCHANGED)
    if img is None:
        raise FileNotFoundError(f"Bild nicht gefunden (Pfad falsch?): {p}")

    if img.ndim == 2:
        print("Graustufen")  # Graustufen, ok

    elif img.shape[2] == 4:
        # BGRA -> BGR
        img = cv2.cvtColor(img, cv2.COLOR_BGRA2BGR)
    elif img.shape[2] == 3:
        print("BGR")  # BGR, ok
    else:
        # exotisches Format -> über Pillow nach RGB und zurück
        img_pil = Image.open(p)
        img_pil = ImageOps.exif_transpose(img_pil).convert("RGB")
        img = cv2.cvtColor(np.array(img_pil), cv2.COLOR_RGB2BGR)

    cv2.imshow("Detektierte Bauklötze", img)
    cv2.waitKey(0)


if __name__ == '__main__':
    #cv2.startWindowThread()

    title = "Detektierte Bauklötze"
    cv2.namedWindow(title, cv2.WINDOW_NORMAL)

    p = "baukloetze_small.jpg"
    img = cv2.imread("rbc_6.jpg")

    def on_click(event, x, y, flags, param):
        if event == cv2.EVENT_LBUTTONDOWN:
            bgr = img[y,x].tolist()
            hsv = cv2.cvtColor(np.uint8([[bgr]]), cv2.COLOR_BGR2HSV)[0,0].tolist()
            lab = cv2.cvtColor(np.uint8([[bgr]]), cv2.COLOR_BGR2LAB)[0,0].tolist()
            print(f"BGR {bgr} | HSV {hsv} | Lab {lab}")

    # contours_with_min_area = classify_closed_contours(img)
    contours_with_min_area = get_contour(img)
    
    draw_contour_box(img, contours_with_min_area)
    #name_of_colors = get_contour_color(img, contours_with_min_area)
    name_of_colors = classify_color_lab(img, contours_with_min_area)
    print("Farben: ", name_of_colors, "Anzahl Min: ", len(contours_with_min_area))
    put_contour_text(img, contours_with_min_area, name_of_colors)
    

    
    cv2.imshow(title, img)
    # # Event-Loop kurz „pumpen“, bis das Fenster *wirklich* da ist
    # for _ in range(200):  # ~2 s max
    #     vis = cv2.getWindowProperty(title, cv2.WND_PROP_VISIBLE)
    #     if vis >= 1:      # Fenster ist sichtbar/realisiert
    #         break
    #     cv2.waitKey(10)
    # cv2.setMouseCallback(title, on_click)  # jetzt erst den Callback hängen

    h, w = img.shape[:2]
    cv2.resizeWindow(title, int(w/1.2), int(h/1.2))
    # cv2.resizeWindow(title, *img.shape[1::-1])  # optional
    cv2.waitKey(0)
    cv2.destroyAllWindows()

