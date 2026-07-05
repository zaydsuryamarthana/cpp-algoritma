#include "header.h"
#include <iostream>
using namespace std;

void pertemuan5() {
  int pilihan, n;

  DataNode *head = nullptr;
  DataNode *tail = nullptr;

  do {
    int value;
    cout << "\nPertemuan 5 : Single Linked List Non Circular" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Kasus 1 : Deklarasikan data" << endl;
    cout << "Kasus 2 : Menambahkan baris data di Depan" << endl;
    cout << "Kasus 3 : Menambahkan baris data di Belakang" << endl;
    cout << "Kasus 4 : Menghapus baris data di Depan" << endl;
    cout << "Kasus 5 : Menghapus baris data di Belakang" << endl;
    cout << "-----------------------------------------------------" << endl;
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
      outputNode(head);
      break;
    case 2:
      cout << "Masukkan data yang ingin ditambahkan di depan : ";
      cin >> value;
      inputFront(head, value);
      cout << "\nMenampilkan data Linked List Sekarang" << endl;
      outputNode(head);
      break;
    case 3:
      cout << "Masukkan data yang ingin ditambahkan di depan : ";
      cin >> value;
      inputBack(head, tail, value);
      cout << "\nMenampilkan data Linked List sekarang" << endl;
      outputNode(head);
      break;
    case 4:
      deleteFront(head);
      cout << "\nMenampilkan data Linked List sekarang" << endl;
      outputNode(head);
      break;
    case 5:
      cout << "\nMenampilkan Linked List sekarang" << endl;
      outputNode(head);
      deleteBack(head, tail);
      cout << "\nMenampilkan data Linked List sekarang" << endl;
      outputNode(head);
      break;
    }
  } while (pilihan != 0);
}