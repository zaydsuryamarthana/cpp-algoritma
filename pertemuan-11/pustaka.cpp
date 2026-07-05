#include "header.h"
#include <cstddef>
#include <iostream>

using namespace std;

void declareBinaryTree(binaryTree *&head, binaryTree *&right,
                       binaryTree *&left) {

  head = new binaryTree(8);
  head->right = new binaryTree(11);
  head->right->left = new binaryTree(9);
  head->right->left->right = new binaryTree(10);
  head->right->right = new binaryTree(12);

  head->left = new binaryTree(4);
  head->left->left = new binaryTree(2);
  head->left->left->left = new binaryTree(1);
  head->left->left->right = new binaryTree(3);
  head->left->right = new binaryTree(6);
  head->left->right->left = new binaryTree(5);
  head->left->right->right = new binaryTree(7);
}

void displayBinaryTree(binaryTree *&head, binaryTree *&right,
                       binaryTree *&left) {

  cout << "Susunan Binary Tree" << endl;
  cout << "-------------------" << endl;
  cout << "Root " << head->data << endl;
  cout << "-------------------" << endl;
  cout << "Parent\t\t: " << head->right->data << endl;
  cout << "Left Children\t: " << head->right->left->data << endl;
  cout << "Leaf\t\t: " << head->right->left->right->data << ", "
       << head->right->right->data << endl;
  cout << "-------------------" << endl;
  cout << "Parent\t\t: " << head->left->data << endl;
  cout << "Left Children\t: " << head->left->left->data << endl;
  cout << "Right Children\t: " << head->left->right->data << endl;
  cout << "Leaf\t\t: " << head->left->left->left->data << ", "
       << head->left->left->right->data << ", " << head->left->right->left->data
       << ", " << head->left->right->right->data << endl;
}

void levelBinaryTree(binaryTree *&head, binaryTree *&right, binaryTree *&left) {
  char eksekusi;
  if (head == NULL) {
    cout << "\nTidak ada node di dalam Binary Tree!" << endl;
    cout << "------------------------------------" << endl;
    cout << "Apakah kamu ingin membuat deklarasi [y/n] : ";
    cin >> eksekusi;
    if (eksekusi == 'y' || eksekusi == 'Y') {
      declareBinaryTree(head, right, left);
    } else if (eksekusi == 'n' || eksekusi == 'N') {
      cout << "Kamu akan kembali ke menu utama." << endl;
      return;
    } else {
      cout << "Pilihan tidak ditemukan! Coba ulangi lagi" << endl;
    }
  } else {
    cout << "\nSusunan Level Binary Tree" << endl;
    cout << "-------------------------" << endl;
    cout << "Level 1 : " << head->data << endl;
  }
}
