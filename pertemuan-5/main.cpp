#include "header.h"
#include <iostream>
using namespace std;

void pertemuan5() {
  int pilihan, n;

  DataNode *head = nullptr;
  DataNode *tail = nullptr;

  do {
    int value;
    cout << "\nPertemuan 5 : Struktur Data Linked List " << endl;
    cout << "---------------------------------" << endl;
    cout << "Kasus 1 : Deklarasikan data" << endl;
    cout << "Kasus 2 : Menambahkan baris data di Depan" << endl;
    cout << "Kasus 3 : Menambahkan baris data di Belakang" << endl;
    cout << "Kasus 4 : Menghapus baris data di Depan" << endl;
    cout << "Kasus 5 : Menghapus baris data di Belakang" << endl;
    cout << "---------------------------------" << endl;
    cout << "Kembali 0" << endl;
    cout << "\nPilih salah satu : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      cout << "Masukkan jumlah data : ";
      cin >> n;
      inputNode(n, head, tail);
      cout << "\n--------------------------" << endl;
      cout << "Memproses data Linked List" << endl;
      cout << "--------------------------\n" << endl;
      cout << "Menampilkan data Linked List" << endl;
      outputNode(n, head);
      break;
    case 2:
      cout << "Masukkan data yang ingin ditambahkan di depan : ";
      cin >> value;
      inputFront(head, value);
      cout << "\nMenampilkan data Linked List Sekarang" << endl;
      outputNode(n, head);
    case 4:
      deleteFront(head);
      cout << "\nMenampilkan data Linked List Sekarang" << endl;
      outputNode(n, head);
      break;
    }
  } while (pilihan != 0);
}