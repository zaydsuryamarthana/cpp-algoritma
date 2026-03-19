#include "header.h"
#include "pertemuan-1/header.h"
#include "pertemuan-2/header.h"
#include <iostream>
using namespace std;

int main() {
  int pilihan;
  cetakIdentitas();
  do {
    cout << "\nMATA KULIAH ALGORITMA & STRUKTUR DATA" << endl;
    cout << "--------------------------------------" << endl;
    cout << "1. Review Dasar Pemrograman" << endl;
    cout << "2. Kelas dan Objek" << endl;
    cout << "3. Algoritma Pengurutan" << endl;
    cout << "4. Algoritma Pencarian" << endl;
    cout << "--------------------------------------" << endl;
    cout << "\nPilih salah satu pertemuan : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      pertemuan1();
      break;
    case 2:
      pertemuan2();
      break;
    }
  } while (pilihan != 0);
  return 0;
}