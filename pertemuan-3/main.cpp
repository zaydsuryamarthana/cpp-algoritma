#include "header.h"
#include <iostream>

using namespace std;

void pertemuan3() {
  int pilihan;
  do {
    cout << "\nPertemuan 3 : Algoritma Pengurutan" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Kasus 1 : Algoritma Bubble Sort" << endl;
    cout << "Kasus 2 : Implementasi Data Mahasiswa " << endl;
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
    }
  } while (pilihan != 0);
}