#include "header.h"
#include <iostream>

using namespace std;

void pertemuan3() {
  int pilihan;
  do {
    cout << "\nPertemuan 3 : Algoritma Pengurutan" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Kasus 1 : Algoritma Bubble Sort" << endl;
    cout << "Kasus 2 : Algoritma Selection Sort" << endl;
    cout << "Kasus 3 : Algoritma Insertion" << endl;
    cout << "Kasus 4 : Implementasi Data Mahasiswa " << endl;
    cout << "--------------------------------------" << endl;
    cout << "Kembali 0" << endl;
    cout << "\nPilih salah satu kasus : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      kasus1P3();
      break;
    case 2:
      kasus2P3();
      break;
    case 3:
      kasus3P3();
      break;
    case 4:
      break;
    }
  } while (pilihan != 0);
}