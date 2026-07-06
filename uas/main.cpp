#include "header.h"
#include <iostream>

using namespace std;

int main() {
  doubleLinkedListCircular functionSoal1;
  stackLinkedList functionSoal2;
  queueLinkedList functionSoal3;
  int pilihan, data, eksekusi;
  do {
    cout << "Program UAS Algoritma Pemrograman | Struktur Data" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "1. Double Linked List Circular" << endl;
    cout << "2. Stack Linked List" << endl;
    cout << "3. Queue Linked List" << endl;
    cout << "4. Binary Tree" << endl;
    cout << "\nPilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      functionSoal1.menu();
      break;
    case 2:
      functionSoal2.menu();
      break;
    case 3:
      functionSoal3.menu();
      break;
    case 4:
      break;
    default:
      cout << "\nProgram yang dipilih tidak ditemukan!" << endl;
      break;
    }

  } while (pilihan != 0);
  return 0;
}