#include "header.h"
#include <cstddef>
#include <iostream>
using namespace std;

DataDoubleNode *head = NULL, *tail = NULL;

void pertemuan7() {
  int pilihan, data, position;
  bool action = false;
  do {
    cout << "\nPertemuan 7 : Double Linked List Non Circular" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Kasus 1 : Menambahkan data di depan" << endl;
    cout << "Kasus 2 : Menambahkan data di belakang" << endl;
    cout << "Kasus 3 : Menambahkan data di tengah" << endl;
    cout << "Kasus 4 : Menghapus data di depan" << endl;
    cout << "Kasus 5 : Menghapus data di belakang" << endl;
    cout << "Kasus 6 : Menghapus data di tengah" << endl;

    cout << "\nPilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan) {
    default:
      cout << "Program tidak ditemukan, silahkan ulangi lagi!" << endl;
      break;
    case 1:
      inputData(data, false, position);
      addFront(head, tail, data);
      printNode(head);
      break;
    case 2:
      inputData(data, false, position);
      addBack(head, tail, data);
      printNode(head);
      break;
    case 3:
      inputData(data, true, position);
      addMiddle(head, tail, data, position);
      printNode(head);
      break;
    case 4:
      deleteFront(head, tail);
      printNode(head);
      break;
    case 5:
      deleteBack(head, tail);
      printNode(head);
      break;
    case 6:
      break;
    }
  } while (pilihan != 0);
}