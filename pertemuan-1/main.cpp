#include "header.h"
#include "iostream"

using namespace std;

void pertemuan1() {
  int pilihan;
  do {
    cout << "\nPertemuan 1 : Review Dasar Pemrograman" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Kasus 1 : Review Variabel dan Assignment" << endl;
    cout << "Kasus 2 : Upah Lembur Karyawan" << endl;
    cout << "Kasus 3 : Perulangan Angka" << endl;
    cout << "Kasus 4 : Array MAX, MIN, SUM, AVERAGE" << endl;
    cout << "Kasus 5 : ADT Structure" << endl;
    cout << "Kasus 6 : Fungsi dan/atau Prosedur" << endl;
    cout << "Kasus 7 : Latihan Pointer" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Kembali 0" << endl;
    cout << "\nPilih salah satu kasus : ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
      kasus1();
      break;
    case 2:
      kasus2();
      break;
    case 3:
      kasus3();
      break;
    case 4:
      kasus4();
      break;
    case 5:
      kasus5();
      break;
    case 6:
      kasus6();
      break;
    case 7:
      kasus7();
      break;
    }
  } while (pilihan != 0);
}