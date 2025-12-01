# Datenpersistenz

- Datei
  - Name (name + Extension)
  - Pfad
  - Inhalt
- Dateisysteme
  - Microsoft
    - FAT12
    - FAT16
    - FAT32 (3GB-32GB)
    - NTFS
    - exFAT
  - Linux
    - ext, ext2, ext3, ext4
    - reiserfs
    - btrfs
    - ...
- Datenträger
  - mechanisch
    - Lochkarte
    - Lochstreifen
  - magnetisch
    - Kasette
    - Floppy
    - HDD
  - optisch
    - CD
    - DVD
    - Blu-ray
  - elektronisch
    - USB-Stick
    - SSD
    - NVMe
  - Dateiformate
    - Textdateien
      - *.txt
      - *.csv
      - *.ini
      - *.xml
      - *.json
      - *.svg
    - Binärdateien
      - *.doc, *.docx, *.xls, *.xlsx, ...
      - *.odt, ...
      - Bilder
        - *.jpg, *.png, *.gif, *.tif, *.raw
        - *.dwg, *.ipt
      - Multimedia
        - *.mp3, *.mp4

## Textformate
- csv
- ini
- json
- xml

Beispieldateien:

`leds.csv` 
```csv
Name1;255;0;0;128;10
Name2;0;255;0;128;10
Name3;0;0;255;128;10
```

`leds.ini`
```ini
[config]
anzahl=3

[led_0]
name=Name1
rot=255
green=0
blue=0
white=128
address=10

[led_1]
...
```

`leds.json`
```json
[
    {
        "name": "Name1",
        "red": 255,
        "blue": 0,
        "green": 0,
        "white": 128,
        "adress": 10,
    }
    {
        "name": "Name2",
        .
        .
        .
    }
]
```

---

# Streams

- byte , byte[ ]
  - Outputstream (Daten schreiben)
    - ``write(byte)``
    - ``flush()``
    - ``close()`` 
    - -> FileOutputStream, ByteArrayOutputStream
    - -> FilterOutPutStream
  - Inputstream (Daten Lesen)
    - ``read()->byte``
    - ``available()->int`` Anzahl der bytes die da sind
    - ``close()``
    - -> FileInputStream
    - -> FilterInputStream

- Char, String (automatische Codierung)
  - Writer (Daten schreiben) (kommt von Outputstream)
    - ``write(byte)``
    - ``flush()``
    - ``close()`` 
    - -> FileWriter, StringWriter(``toString()``)
    - -> FilterWriter
  - Reader (Daten lesen) (kommt von Inputstream)
    - ``read()->char``
    - ``ready()->boolean``
    - ``close()``
    - -> FileReader, StringReader
    - -> FilterReader
  
JApp -> FW -> Gerät
JApp -> BW -> FW -> Gerät

JApp ... Java Applikation
BW ... BufferedWriter
FW ... FileWriter























> ==scheucher==