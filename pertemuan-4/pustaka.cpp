#include "header.h"
#include <iostream>

using namespace std;
int SearchBase::getSize() { return n; }

int SearchBase::getAwal() { return awal; }

int SearchBase::getAkhir() { return akhir; }

int SearchBase::getArray(int index) { return arr[index]; }

int *SearchBase::getData() { return arr; }

void SearchBase::setSize(int max) {
  n = max;
  arr = new int[n];
}

void SearchBase::setBinary(int max) {
  awal = 0;
  akhir = max;
}

void SearchBase::setArray(int index, int value) {
  if (index >= 0 && index < n) {
    arr[index] = value;
  }
}

void printArray(SearchBase &data) {
  int n = data.getSize();
  int *arr = data.getData();

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void inputArray(SearchBase &data) {
  int n = data.getSize();
  int value;
  for (int i = 0; i < n; i++) {
    cout << "Data ke - " << i + 1 << " : ";
    cin >> value;
    data.setArray(i, value);
  }
}

bool checkBinary(int *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      return true;
    }
  }
  return false;
}

void sortBinary(int *arr, int n) {
  int temp;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int algoritmaLinear(int *arr, int n, int search) {
  bool result = false;
  for (int i = 0; i < n; i++) {
    if (arr[i] == search) {
      result = true;
      return i;
    }
  }
  return result;
}

int algoritmaBinary(int *arr, int search, int awal, int akhir) {
  bool find = false;
  while (awal <= akhir) {
    int tengah = (awal + akhir) / 2;
    if (arr[tengah] == search) {
      find = true;
      return tengah;
    } else if (arr[tengah] < search) {
      awal = tengah + 1;
    } else {
      akhir = tengah - 1;
    }
  }
  return find;
}

void kasus1P4() {
  int n, search;
  SearchBase data;
  cout << "\nAlgoritma Linear Search" << endl;
  cout << "-----------------------" << endl;
  cout << "Lengkapi data array terlebih dahulu " << endl;
  cout << "\nMasukkan data maksimal : ";
  cin >> n;

  data.setSize(n);
  cout << "-----------------------" << endl;
  inputArray(data);

  cout << "\nData-data yang tersimpan : ";
  printArray(data);

  cout << "\nNilai berapa yang kamu cari\t: ";
  cin >> search;

  int find = algoritmaLinear(data.getData(), data.getSize(), search);

  if (find != false) {
    cout << "Data telah ditemukan pada index\t: " << find;
  } else {
    cout << "Data tidak ditemukan" << endl;
  }

  cout << endl;
}

void kasus2P4() {
  SearchBase data;
  int n, search, awal = 0, akhir, tengah;
  cout << "\nAlgoritma Bisection Binary Search" << endl;
  cout << "---------------------------------" << endl;
  cout << "Masukkan data maksimal : ";
  cin >> n;

  data.setSize(n);
  cout << "-----------------------" << endl;
  inputArray(data);
  cout << "-----------------------" << endl;
  cout << "Data-data yang tersimpan : ";
  printArray(data);
  cout << "\n-----------------------" << endl;

  bool binary = checkBinary(data.getData(), data.getSize());

  if (binary) {
    cout << "Data awal : ";
    printArray(data);
    cout << "\n------------------------------" << endl;
    cout << "Melakukan sort data terlebih dahulu" << endl;
    cout << "------------------------------" << endl;
    sortBinary(data.getData(), data.getSize());
    cout << "Data Akhir : ";
    printArray(data);
  } else {
    cout << "Proses melakukan Algoritma Bisection Binary Searching" << endl;
  }

  data.setBinary(data.getSize());

  cout << "\n------------------------------" << endl;
  cout << "Nilai berapa yang kamu cari : ";
  cin >> search;

  int resultBinary =
      algoritmaBinary(data.getData(), search, data.getAwal(), data.getAkhir());

  if (resultBinary != false) {
    cout << "\nData kamu ditemukan pada indeks ke : " << resultBinary << endl;
    cout << "\nData kamu ditemukan pada urutan ke : " << resultBinary + 1
         << endl;
  } else {
    cout << "\nData tidak ditemukan" << endl;
  }
}