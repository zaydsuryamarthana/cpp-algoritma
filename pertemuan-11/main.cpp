#include "header.h"
#include <iostream>

using namespace std;

void pertemuan11() {
  int pilihan;
  binaryTree *head, *left, *right;
  do {

    cout << "\nPertemuan 11 : Binary Tree" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Kasus 1 : Deklarasi Binary Tree" << endl;
    cout << "Kasus 2 : Level Tree" << endl;
    cout << "Kasus 3 : Traversal Pre Order" << endl;
    cout << "Kasus 4 : Traversal In Order" << endl;
    cout << "Kasus 5 : Traversal Post Order" << endl;

    cout << "\nPilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      declareBinaryTree(head, right, left);
      displayBinaryTree(head, right, left);
      break;
    case 2:
      levelBinaryTree(head, right, left);
      break;
    }
  } while (pilihan != 0);
}