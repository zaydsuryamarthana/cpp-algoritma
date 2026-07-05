#ifndef PERTEMUAN_11_H
#define PERTEMUAN_11_H
#include <cstddef>
#include <iostream>

struct binaryTree {
  int data;
  binaryTree *right, *head = NULL, *left;

  binaryTree(int x) : data(x), left(NULL), right(NULL) {}
};

void pertemuan11();
void declareBinaryTree(binaryTree *&head, binaryTree *&right,
                       binaryTree *&left);
void displayBinaryTree(binaryTree *&head, binaryTree *&right,
                       binaryTree *&left);
void levelBinaryTree(binaryTree *&head, binaryTree *&right, binaryTree *&left);

#endif
