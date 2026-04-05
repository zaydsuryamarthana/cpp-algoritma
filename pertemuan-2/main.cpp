#include "header.h"
#include <iostream>

using namespace std;

void pertemuan2() {
  int pilihan;
  cout << "\nPertemuan 2 : Kelas dan Objek" << endl;
  cout << "-----------------------------" << endl;
  cout << "1. Kasus 1 : Review Constructor" << endl;
  cout << "2. Kasus 2 : Class dan Object" << endl;
  cout << "-----------------------------" << endl;
  cout << "0. Kembali " << endl;
  cout << "\nPilih salah satu studi kasus : ";
  cin >> pilihan;

  switch (pilihan) {
  case 1:
    kasus1P2();
    break;
  case 2:
    kasus2P2();
    break;
  }
}