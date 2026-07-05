#ifndef PERTEMUAN_10_H
#define PERTEMUAN_10_H

#include <iostream>
using namespace std;

class stackArray {
protected:
  int maksimal = 5;
  int top = 0;
  string buku[5];

public:
  void pushData(int data);
  void popData();
  void peekData(int position);
  void changeData(int data, int position);
  void destroyData();
};

class stackLinkedList {
protected:
  string nama;
  int harga;
  stackLinkedList *next, *prev, *head;

public:
  void pushData(string nama, int harga);
  void popData();
};

void pertemuan10();

#endif
