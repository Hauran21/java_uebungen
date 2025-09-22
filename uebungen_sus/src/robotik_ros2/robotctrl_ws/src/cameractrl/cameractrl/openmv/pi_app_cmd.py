# host_uart_test.py
import serial, struct
import numpy as np, cv2
import time
import binascii

ACK   = b'\x06'

def _write_all(ser:serial.Serial, data, chunk=512, pause=0.001):
    i, n = 0, len(data)
    view = memoryview(data)
    while i < n:
        sent = ser.write(view[i:i+chunk])
        if sent is None or sent == 0:
            time.sleep(pause)
            continue
        i += sent

def _read_exact(ser:serial.Serial, n):
    data = bytearray()
    while len(data) < n:
        chunk = ser.read(n - len(data))
        if not chunk:
            raise RuntimeError("Timeout/Verbindung unterbrochen")
        data += chunk
    return bytes(data)


def send_file_simple(ser:serial.Serial, src_path, dest_name='test.py'):
    data = open(src_path, 'rb').read()

    # 1) Header
    ser.write(b'u')

    # 2) Dateiname
    name_bytes = dest_name.encode('utf-8')
    if len(name_bytes) > 255:
        raise ValueError("Dateiname zu lang")
    ser.write(bytes([len(name_bytes)]))
    if name_bytes:
        ser.write(name_bytes)

    # 3) Länge
    print(f"Sende {len(data)} Bytes")
    ser.write(struct.pack('>I', len(data)))

    # 4) Daten in Chunks
    _write_all(ser, data, chunk=512, pause=0.01)

    # 5) Quittung lesen
    ack = ser.readline().strip()
    if ack != b'OK':
        raise RuntimeError(f"Keine OK-Quittung: {ack!r}")
    print("Übertragung erfolgreich.")

def send_file_to_openmv(ser:serial.Serial, src_path, dest_name='main.py', chunk_size=512):
    with open(src_path, 'rb') as f:
        data = f.read()

    crc = binascii.crc32(data) & 0xFFFFFFFF

    ser.write(b'u')

    # Dateiname
    name_bytes = dest_name.encode('utf-8')
    if len(name_bytes) > 255:
        raise ValueError("Dateiname zu lang")
    ser.write(bytes([len(name_bytes)]))
    if name_bytes:
        ser.write(name_bytes)
    print(f"Sende Dateiname: {name_bytes} ({len(name_bytes)} Bytes)")
    
    # Gesamtlänge
    ser.write(struct.pack('>I', len(data)))

    print(f"Sende {len(data)} Bytes")

    # In Chunks senden + auf ACK warten
    offset = 0
    mv = memoryview(data)
    while offset < len(data):
        n = min(chunk_size, len(data) - offset)
        # 2-Byte Längenfeld (BE)
        ser.write(struct.pack('>H', n))
        # Nutzdaten
        ser.write(mv[offset:offset+n])
        offset += n
        # ACK warten
        ack = ser.read(1)
        if ack != ACK:
            raise RuntimeError(f"Kein ACK erhalten (got={ack!r}, offset={offset})")

    # CRC32 senden
    ser.write(struct.pack('>I', crc))

    # Abschlussquittung lesen
    line = ser.readline().strip()
    if line != b'OK':
        raise RuntimeError(f"Board meldet Fehler: {line!r}")
    print("Übertragung erfolgreich.")

def receive_image_from_openmv(ser:serial.Serial):
    # Bild holen
    ser.reset_input_buffer()
    ser.write(b'i')

    # 4‑Byte Länge lesen
    raw_len = _read_exact(ser, 4)
    (nbytes,) = struct.unpack(">I", raw_len)

    # Bilddaten lesen
    jpg = _read_exact(ser, nbytes)

    # OpenCV-Dekodierung
    arr = np.frombuffer(jpg, dtype=np.uint8)
    img = cv2.imdecode(arr, cv2.IMREAD_COLOR)  # BGR
    assert img is not None, "JPEG konnte nicht dekodiert werden"

    return img


if __name__ == "__main__":
    ser = serial.Serial('/dev/ttyACM0', 256000, timeout=2)  # Port/BAUD anpassen

    # # Bild holen
    # ser.reset_input_buffer()
    # ser.write(b'i')
    # jpg = _read_exact(ser, nbytes)

    title = "OpenMV Image Preview"
    # cv2.namedWindow(title, cv2.WINDOW_NORMAL)

    img = receive_image_from_openmv(ser)
    cv2.imshow(title, img)
    cv2.waitKey(0)

    #send_file_to_openmv(ser, 'test.py', 'test.txt')


    # ser.write(b'r')
    # ser.close()

    # print(f"Bildgröße: {nbytes} Bytes")
    # open('snap.jpg', 'wb').write(jpg)

