#include "header.h"
#include <iostream>

using namespace std;

void pertemuan10() {
  int pilihan, submenu;
  do {
    cout << "\nPertemuan 10 : Stack" << endl;
    cout << "-------------------------" << endl;
    cout << "Kasus 1 : Data Array" << endl;
    cout << "Kasus 2 : Data Linked List" << endl;
    cout << "\nPilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      do {
        cout << "\nKasus 1 : Stack Data Array" << endl;
        cout << "-------------------------" << endl;
        cout << "1. Push / Tambah Data" << endl;
        cout << "2. Pop / Hapus Data" << endl;
        cout << "3. Peek / Cari Data" << endl;
        cout << "4. Change / Ubah Data" << endl;
        cout << "5. Destroy / Hapus Keseluruhan" << endl;
        cout << "\nPilih salah satu tindakan : ";
        cin >> submenu;
        switch (submenu) {
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
          break;
        }
        break;
      } while (submenu != 0);
    case 2:
      cout << "\nKasus 1 : Stack Data Linked List" << endl;
      cout << "-------------------------" << endl;
      cout << "1. Push / Tambah Data" << endl;
      cout << "2. Pop / Hapus Data" << endl;
      cout << "3. Peek / Cari Data" << endl;
      cout << "4. Change / Ubah Data" << endl;
      cout << "5. Destroy / Hapus Keseluruhan" << endl;
      cout << "\nPilih salah satu tindakan : ";
      cin >> submenu;
      switch (submenu) {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      }
      break;
    default:
      break;
    }
  } while (pilihan != 0);
}