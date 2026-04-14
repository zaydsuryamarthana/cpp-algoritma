#ifndef HEADER_H
#define HEADER_H

class SearchBase {
protected:
  int n;
  int *arr;
  int awal;
  int akhir;

public:
  void setSize(int max);
  void setArray(int index, int value);
  void setBinary(int max);
  int getAwal();
  int getAkhir();
  int getTengah();
  int *getData();
  int getSize();
  int getArray(int index);
};

int algoritmaLinear(int *arr, int n, int search);
int algoritmaBinary(int *arr, int search, int awal, int akhir);
bool checkBinary(int *arr, int n);
void sortBinary(int *arr, int n);
void printArray(SearchBase &data);

void pertemuan4();
void kasus1P4();
void kasus2P4();

#endif