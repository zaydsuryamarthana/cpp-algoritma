# Fundamental Dasar Algoritma

Proyek ini berisi kumpulan latihan untuk memahami **algoritma dasar menggunakan Bahasa C++**. Setiap folder (pertemuan1, pertemuan2, dst.) mewakili pertemuan atau topik tertentu dalam pembelajaran algoritma.

## Tujuan
Memberikan pengenalan terhadap **fundamental algoritma** melalui studi kasus dan materi.
## Cara Menggunakan

1. **Siapkan Code Editor & Compiler**
   - Unduh **Visual Studio Code** (disarankan): [https://code.visualstudio.com/download](https://code.visualstudio.com/download)
   - Compiler (MinGW): [https://sourceforge.net/projects/mingw/](https://sourceforge.net/projects/mingw/)

2. **Buka & Jalankan Proyek**
   ```bash
   git clone https://github.com/zaydsuryamarthana/cpp-algoritma.git
   cd cpp-algoritma
   ```
   Build Program C++
   ```bash
   g++ *.cpp pertemuan-*/*.cpp -o sistem
   ./sistem
   ```

## Struktur File
Setiap file pertemuan disusun seperti berikut:
```
└── pertemuan1/   → Review Dasar Pemrograman C++
    ├── header.h  
    ├── pustaka.cpp
    └── main.cpp  
├── pertemuan2/  → Class & Object
├── pertemuan3/   → Algoritma Pengurutan
├── pertemuan4/   → Algoritma Pencarian
├── header.h   
├── pustaka.cpp   
└── main.cpp  → File utama proyek
```
