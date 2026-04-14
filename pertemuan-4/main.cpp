#include "header.h"
#include <iostream>

using namespace std;

void pertemuan4() {
  int pilihan;
  do {
    cout << "\nPertemuan 4 : Algoritma Pencarian" << endl;
    cout << "---------------------------------" << endl;
    cout << "Kasus 1 : Algoritma Linear" << endl;
    cout << "Kasus 2 : Algoritma Bisection Binary" << endl;
    cout << "Kasus 3 : Implementasi Algoritma Pencarian" << endl;
    cout << "---------------------------------" << endl;
    cout << "Kembali 0" << endl;
    cout << "\nPilih salah satu : ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
      kasus1P4();
      break;
    case 2:
      kasus2P4();
      break;
    case 3:
      break;
    }
  } while (pilihan != 0);
}