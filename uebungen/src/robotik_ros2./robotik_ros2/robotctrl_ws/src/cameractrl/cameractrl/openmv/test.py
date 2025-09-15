# ??.py
# Kombinierter I/O: USB (sys.stdin/sys.stdout) ODER UART (machine.UART)
# Protokoll:
#   'i' -> "<size>\n" + <JPEG-bytes>
#   'p' -> "pong\n"
#   'd' -> Detection-Modus starten (bei Fund 0x01)
#   's' -> Detection-Modus stoppen

import sensor, image, time, sys
from machine import UART
from micropython import const
try:
    import uos as os
except:
    import os

# ========= KONFIG =========
USE_USB       = True          # True = USB-CDC über sys.stdin/stdout; False = UART
# UART-Parameter (für USE_USB = False)
UART_ID       = 3
BAUD          = 921600
TIMEOUT_CHAR  = 50            # ms je Zeichen
CHUNK         = 512
PIXFORMAT     = sensor.RGB565  # oder sensor.GRAYSCALE
FRAMESIZE     = sensor.QQVGA   # QQVGA/QVGA …
JPEG_QUALITY  = 80

MODE_IDLE = const(0)
MODE_DET  = const(1)

# ========= I/O-ABSTRAKTION =========
try:
    import select
    _HAS_SELECT = True
except:
    _HAS_SELECT = False
 
class IOBase:
    def any(self) -> int: ...
    def readchar(self) -> int: ...
    def read_exact(self, n: int) -> bytes: ...
    def write(self, b, chunk=CHUNK) -> int: ...
    def writeline(self, s: str) -> int: ...

class USBIO(IOBase):
    def __init__(self):
        self._use_select = _HAS_SELECT
        if self._use_select:
            self._poll = select.poll()
            self._poll.register(sys.stdin, select.POLLIN)

    def any(self):
        if self._use_select:
            # 0 ms: reines Polling
            ev = self._poll.ipoll(0)
            return 1 if ev else 0
        else:
            # Kein select verfügbar: keine echte Nicht-Blockierung möglich
            return 0

    def readchar(self):
        if self._use_select:
            #if not self._poll.ipoll(0):
            #    return -1
            s = sys.stdin.read(1)          # str
            if not s:
                return -1
            return ord(s[0])
        # Fallback: blockierend lesen
        s = sys.stdin.read(1)              # str oder None
        if not s:
            return -1
        return ord(s[0])

    def read_exact(self, n: int) -> bytes:
        out = bytearray()
        while len(out) < n:
            chunk = sys.stdin.read(n - len(out))
            if not chunk:
                time.sleep(0.001)
                continue
            out.extend(chunk)
        return bytes(out)
    
    # --------- Schreiben NUR als Text ----------
    def write(self, b, chunk=CHUNK):
        if isinstance(b, (bytes, bytearray, memoryview)):
            mv = memoryview(b)
            i, n = 0, len(mv)
            while i < n:
                try:
                    w = sys.stdout.buffer.write(mv[i:i+chunk])
                    if w is None:
                        w = 0
                except OSError:
                    w = 0
                 
                time.sleep(0.001)
                i += w
        elif isinstance(b, str):
            sys.stdout.buffer.write(b)
        else:
            sys.stdout.buffer.write(str(b))
        return 1

    def writeline(self, s: str):
        #print(s)              # \n automatisch
        sys.stdout.buffer.write(s)
        return 1

class UARTIO(IOBase):
    def __init__(self, uart_id, baud, timeout_char):
        self.uart = UART(uart_id, baudrate=baud, timeout_char=timeout_char)

    def any(self):
        try:
            return self.uart.any()
        except:
            return 0

    def readchar(self):
        b = self.uart.read(1)
        if not b:
            return -1
        return b[0]

    def write(self, b, chunk=CHUNK):
        return self.uart.write(b)

    def writeline(self, s: str):
        return self.uart.write(s.encode("ascii") + b"\n")
        
# I/O wählen
io = USBIO() if USE_USB else UARTIO(UART_ID, BAUD, TIMEOUT_CHAR)

# ========= KAMERA =========
sensor.reset()
sensor.set_pixformat(PIXFORMAT)
sensor.set_framesize(FRAMESIZE)
sensor.skip_frames(time=2000)
clock = time.clock()

mode = MODE_IDLE


def receive_file(default_name='test.py'):
    # 2) Dateiname (1‑Byte Länge + Bytes)
    name_len = io.read_exact(1)[0]
    if name_len == 0:
        fname = default_name
    else:
        fname = io.read_exact(name_len).decode()

    # 3) Nutzdatenlänge (4‑Byte Big‑Endian)
    size = int.from_bytes(io.read_exact(4), 'big')
    # 4) Pfad bestimmen (meist /flash vorhanden)
        
#    remaining = size
#    while remaining:
#        chunk = io.read_exact(min(512, remaining))
#        #f.write(chunk)
#        remaining -= len(chunk)
                
#    io.write(os.listdir('/'))
                
    path = '/flash/{}'.format(fname)
    try:
        with open(path, 'wb') as f:
            remaining = size
            while remaining:
                chunk = io.read_exact(min(512, remaining))
                f.write(chunk)
                remaining -= len(chunk)
    finally:
        try:
            os.sync()
        except:
            sys.stdout.write('ERR-1\n')

    # 5) Quittung
    sys.stdout.write('OK\n')

def send_image_jpg():
    img = sensor.snapshot(quality=JPEG_QUALITY).compress()
    b = img.bytearray()

    # 4 Byte Big‑Endian Länge senden
    length = len(b).to_bytes(4, 'big')
    io.write(length)

    # Bilddaten in Chunks senden
    io.write(b, chunk=512)
    
def handle_detection_once(img):
    pass   
        
# Beispiel-Loop: 1-Byte-Kommandos 'p' und 't' (ping/test)
# und zyklisch 1 Hz "Test" ausgeben.

#_HAS_SELECT = False
io = USBIO()

#print("Test", _HAS_SELECT)
while True:
    clock.tick()

    if io.any():
        c = io.readchar()
        if c == ord('p'):
            io.writeline("pong")
        elif c == ord('i'): # Bild senden
            send_image_jpg()
        elif c == ord('u'): # Datei empfangen
            receive_file()  
        elif c == ord('d'): # Detection-Modus starten
            pass
        elif c == ord('s'): # Detection-Modus stoppen
            pass
        elif c == ord('c'): # rot, grün oder gelb kalibirieren
            pass
        elif c == ord('r'): # Reset
            machine.reset()
        elif c == ord('t'): # Schwellwerte festlegen
            pass
    time.sleep_ms(1000)


from machine import LED

led = LED("LED_BLUE")

while True:
    led.on()
    time.sleep_ms(500)
    led.off()
    time.sleep_ms(500)