#include "header.h"
#include <iostream>

using namespace std;

void SortBase::setSize(int max) {
  n = max;
  arr = new int[n];
}

void SortBase::setArray(int index, int value) {
  if (index >= 0 && index < n) {
    arr[index] = value;
  }
}
int SortBase::getSize() { return n; }
int SortBase::getArray(int index) { return arr[index]; }
int *SortBase::allData() { return arr; }

void printArray(SortBase &data) {
  int *arr = data.allData();
  int n = data.getSize();

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void bubbleSort(int *arr, int n) {
  int tahap = 1;
  cout << "\n----------------------------" << endl;
  cout << "PROSES ALGORITMA BUBBLE SORT" << endl;
  cout << "----------------------------" << endl;
  cout << "Awal\t\t: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        cout << "Tahapan - " << tahap++ << "\t: ";
        for (int k = 0; k < n; k++) {
          cout << arr[k] << " ";
        }
        cout << endl;
      }
    }
  }
  cout << "----------------------------";
}

void selectionSort(int *arr, int n) {
  int tahap = 1;
  cout << "\n-----------------------------" << endl;
  cout << "PROSES ALGORITMA SELECTION SORT" << endl;
  cout << "-----------------------------" << endl;
  cout << "Awal\t\t: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  int key, temp;
  for (int i = 0; i < n - 1; i++) {
    key = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[key]) {
        key = j;
      }
    }
    temp = arr[key];
    arr[key] = arr[i];
    arr[i] = temp;
  }
}
void insertionSort(int *arr, int n) {
  int tahap = 1;
  cout << "\n-----------------------------" << endl;
  cout << "PROSES ALGORITMA INSERTION SORT" << endl;
  cout << "-----------------------------" << endl;
  cout << "Awal\t\t: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  int key, temp;
  for (int i = 1; i < n; i++) {
    key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

void kasus1P3() {
  SortBase data;
  int n;
  cout << "Masukkan jumlah data yang diinginkan : ";
  cin >> n;

  data.setSize(n);

  for (int i = 0; i < n; i++) {
    int value;
    cout << "Data ke - " << i + 1 << "\t\t: ";
    cin >> value;
    data.setArray(i, value);
  }

  cout << "\nData yang disimpan\t: ";
  printArray(data);

  bubbleSort(data.allData(), n);

  cout << "\nData setelah diolah\t: ";
  printArray(data);
}

void kasus2P3() {
  SortBase data;
  int n;
  cout << "Masukkan jumlah data yang diinginkan : ";
  cin >> n;

  data.setSize(n);

  for (int i = 0; i < n; i++) {
    int value;
    cout << "Data ke - " << i + 1 << "\t\t: ";
    cin >> value;
    data.setArray(i, value);
  }

  cout << "\nData yang disimpan\t: ";
  printArray(data);

  selectionSort(data.allData(), n);

  cout << "\nData setelah diolah\t: ";
  printArray(data);
}

void kasus3P3() {
  SortBase data;
  int n;
  cout << "Masukkan jumlah data yang diinginkan : ";
  cin >> n;

  data.setSize(n);

  for (int i = 0; i < n; i++) {
    int value;
    cout << "Data ke - " << i + 1 << "\t\t: ";
    cin >> value;
    data.setArray(i, value);
  }

  cout << "\nData yang disimpan\t: ";
  printArray(data);

  insertionSort(data.allData(), n);

  cout << "\nData setelah diolah\t: ";
  printArray(data);
}