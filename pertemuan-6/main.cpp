#include "header.h"
#include <iostream>

using namespace std;

void pertemuan6() {
  int pilihan, n;
  DataNode *head = nullptr, *tail = nullptr;
  do {
    cout << "\nPertemuan 6 : Single Linked List Circular" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Kasus 1 : Deklarasikan data" << endl;
    cout << "Kasus 2 : Menambahkan data di depan" << endl;
    cout << "Kasus 3 : Menambahkan data di belakang" << endl;
    cout << "Kasus 4 : Menambahkan data di tengah" << endl;
    cout << "Kasus 5 : Menghapus data di depan" << endl;
    cout << "Kasus 6 : Menghapus data di belakang" << endl;
    cout << "Kasus 7 : Menghapus data di tengah" << endl;

    cout << "\nPilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      cout << "Masukkan jumlah data : ";
      cin >> n;
      inputNodeCircullar(head, tail, n);
      outputNodeCircullar(head, tail);
      break;
    case 2:
    cout << "Masukkan" << endl;
      break;
    }
  } while (pilihan != 0);
}