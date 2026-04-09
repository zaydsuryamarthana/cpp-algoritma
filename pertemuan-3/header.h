#ifndef PERTEMUAN_3_H
#define PERTEMUAN_3_H

void pertemuan3();
void kasus1P3();
void kasus2P3();
void kasus3P3();
void kasus4P3();

class SortBase {
protected:
  int n;
  int *arr;

public:
  void setSize(int max);
  void setArray(int index, int value);
  int getArray(int index);
  int getSize();
  int *allData();
};

void bubbleSort(int *arr, int n);
void selectionSort(int *arr, int n);
void insertionSort(int *arr, int n);

void printArray(SortBase &data);

#endif