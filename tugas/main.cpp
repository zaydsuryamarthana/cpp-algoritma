#include "header.h"
#include <cstddef>
#include <iostream>

using namespace std;

int main() {
  int pilihan, n, listData, sortData, searchData, search;
  baseData algoritma;

  nodeData *head = nullptr;
  nodeData *tail = nullptr;

  do {
    cout << "\nTUGAS ALGORITMA & STRUKTUR DATA" << endl;
    cout << "------------------------------------------" << endl;
    information();
    cout << "------------------------------------------" << endl;
    cout << "Program Algoritma & Struktur Data" << endl;
    cout << "------------------------------------------" << endl;
    cout << "1. Algoritma Sorting" << endl;
    cout << "2. Algoritma Searching" << endl;
    cout << "3. Struktur Data Linked List" << endl;
    cout << "0. Selesai" << endl;
    cout << "\nPilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      do {
        if (algoritma.getSize() <= 0) {
          algoritma.setData(10);
          inputData(algoritma);
          outputData(algoritma);
        } else if (algoritma.getSize() > 0) {
          cout << "\nProgram Algoritma Sorting" << endl;
          cout << "-------------------------" << endl;
          cout << "1. Bubble Sort" << endl;
          cout << "2. Insertion Sort" << endl;
          cout << "3. Selection Sort" << endl;
          cout << "0. Kembali" << endl;
          cout << "\nPilih salah satu program : ";
          cin >> sortData;
          switch (sortData) {
          case 1:
            cout << "\nHasil Data Algoritma Bubble Sort" << endl;
            algoritmaBubble(algoritma.getData(), algoritma.getSize());
            outputData(algoritma);
            cout << "\nProses Reset Data Array " << endl;
            for (int i = 0; i < algoritma.getSize(); i++) {
              algoritma.resetArray(i);
            }
            outputData(algoritma);
            break;
          case 2:
            cout << "\nHasil Data Algoritma Selection Sort" << endl;
            algoritmaSelection(algoritma.getData(), algoritma.getSize());
            outputData(algoritma);
            cout << "\nProses Reset Data Array " << endl;
            for (int i = 0; i < algoritma.getSize(); i++) {
              algoritma.resetArray(i);
            }
            outputData(algoritma);
            break;
          case 3:
            cout << "\nHasil Data Algoritma Insertion Sort" << endl;
            algoritmaInsertion(algoritma.getData(), algoritma.getSize());
            outputData(algoritma);
            cout << "\nProses Reset Data Array " << endl;
            for (int i = 0; i < algoritma.getSize(); i++) {
              algoritma.resetArray(i);
            }
            outputData(algoritma);
            break;
          }
        }
      } while (sortData != 0);
      break;
    case 2:
      do {
        if (algoritma.getSize() <= 0) {
          algoritma.setData(10);
          inputData(algoritma);
          outputData(algoritma);
        } else if (algoritma.getSize() >= 0) {
          cout << "\nProgram Algoritma Searching" << endl;
          cout << "------------------------------" << endl;
          cout << "1. Algoritma Linear" << endl;
          cout << "2. Algoritma Binary" << endl;
          cout << "0. Kembali" << endl;
          cout << "\nPilih salah satu program : ";
          cin >> searchData;
          switch (searchData) {
          case 1:
            outputData(algoritma);
            cout << "\nData yang ingin dicari : ";
            cin >> search;
            algoritmaLinear(algoritma.getData(), algoritma.getSize(), search);
            break;
          case 2:
            algoritmaInsertion(algoritma.getData(), algoritma.getSize());
            outputData(algoritma);
            cout << "\nData yang ingin dicari : ";
            cin >> search;
            algoritmaBinary(algoritma.getData(), algoritma.getSize(), search);
            cout << "\nProses Reset Data Array " << endl;
            for (int i = 0; i < algoritma.getSize(); i++) {
              algoritma.resetArray(i);
            }
            outputData(algoritma);
            break;
          }
        }
      } while (searchData != 0);
      break;

    case 3:
      do {
        if (head == nullptr) {
          cout << "\nMasukkan data yang ingin digunakan : ";
          cin >> n;
          declareNode(head, tail, n);
          outputNode(head);
        }
        cout << "\nProgram Struktur Data Linked List" << endl;
        cout << "------------------------------------------" << endl;
        cout << "1. Tambah data di depan" << endl;
        cout << "2. Tambah data di belakang" << endl;
        cout << "3. Hapus data di depan" << endl;
        cout << "4. Hapus data di belakang" << endl;
        cout << "0. Kembali" << endl;
        cout << "\nPilih salah satu program : ";
        cin >> listData;
        switch (listData) {
        case 1:
          inputFront(head);
          outputNode(head);
          break;
        case 2:
          inputNear(head);
          outputNode(head);
          break;
        case 3:
          deleteFront(head);
          outputNode(head);
          break;
        case 4:
          deleteNear(head);
          outputNode(head);
          break;
        }
      } while (listData != 0);
      break;
    }
  } while (pilihan != 0);

  return 0;
}