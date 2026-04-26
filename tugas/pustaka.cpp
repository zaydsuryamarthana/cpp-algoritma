#include "header.h"
#include <iostream>

using namespace std;

int baseData::getSize() { return data; }
int *baseData::getData() { return arr; }
int baseData::getArray(int index) { return arr[index]; }
void baseData::setData(int n) {
  data = n;
  arr = new int[data];
  temp = new int[data];
}

void baseData::setArray(int index, int value) {
  if (index >= 0 && index < data) {
    arr[index] = value;
    temp[index] = value;
  }
}

void baseData::resetArray(int index) {
  if (index >= 0 && index < data) {
    arr[index] = temp[index];
  }
}

void inputData(baseData &data) {
  int maks = data.getSize();
  cout << "-------------------" << endl;
  cout << "INPUT 10 DATA ARRAY" << endl;
  cout << "-------------------" << endl;
  int value;
  for (int i = 0; i < maks; i++) {
    cout << "Data ke - " << i + 1 << " : ";
    cin >> value;
    data.setArray(i, value);
  }
}

void outputData(baseData &data) {
  int size = data.getSize();
  cout << "------------------------------------" << endl;
  cout << "Data : ";
  for (int i = 0; i < size; i++) {
    cout << data.getArray(i) << " ";
  }
  cout << "\n------------------------------------" << endl;
}

void algoritmaBubble(int *arr, int n) {
  int tahap = 1;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
      // cout << "Tahap ke - " << tahap++ << " : ";
      // for (int k = 0; k < n; k++) {
      //   cout << arr[k] << " ";
      // }
      // cout << endl;
    }
  }
}

void algoritmaSelection(int *arr, int n) {
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

void algoritmaInsertion(int *arr, int n) {
  int key;
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

void algoritmaLinear(int *arr, int n, int search) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == search) {
      cout << "Data ditemukan pada urutan nomor : " << i + 1 << endl;
    }
  }
}

void algoritmaBinary(int *arr, int n, int search) {
  int awal = 0, akhir = n, tengah = 0;
  tengah = (awal + akhir) / 2;
  for (int i = 0; awal <= akhir; i++) {
    if (arr[tengah] == search) {
      cout << "Data ditemukan pada indeks nomor : " << tengah << endl;
      break;
    } else if (arr[tengah] < search) {
      awal = tengah + 1;
    } else {
      akhir = tengah - 1;
    }
  }
}

void declareNode(nodeData *&head, nodeData *&tail, int n) {
  int value;
  for (int i = 1; i <= n; i++) {
    cout << "Input data - " << i << " : ";
    cin >> value;
    nodeData *temp = new nodeData();
    temp->data = value;
    temp->next = nullptr;

    if (head == nullptr) {
      head = temp;
      tail = temp;
    } else {
      tail->next = temp;
      tail = temp;
    }
  }
}

void outputNode(nodeData *head) {
  nodeData *temp = head;
  cout << "\n------------------------------------" << endl;
  cout << "Data : ";
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
  cout << "------------------------------------" << endl;
}

void inputFront(nodeData *&head) {
  int value;
  cout << "Input data : ";
  cin >> value;

  nodeData *temp = new nodeData();
  temp->data = value;
  temp->next = head;

  head = temp;
}

void inputNear(nodeData *&head) {
  int value;
  cout << "Input data : ";
  cin >> value;

  nodeData *data = new nodeData();
  data->data = value;
  data->next = nullptr;

  if (head == nullptr) {
    head = data;
    return;
  }

  nodeData *temp = head;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = data;
}

void deleteFront(nodeData *&head) {
  nodeData *hapus = head;
  head = head->next;
  delete hapus;
}

void deleteNear(nodeData *&head) {
  nodeData *bantu = head;
  nodeData *sebelum = nullptr;
  while (bantu->next != nullptr) {
    sebelum = bantu;
    bantu = bantu->next;
  }
  sebelum->next = nullptr;
  delete bantu;
}

void information() {
  string nama, nim;
  int kelas;
  nama = "Zayd Surya Marthana";
  nim = "A11.2025.16417";
  kelas = 4207;

  cout << "Nama Lengkap\t: " << nama << endl;
  cout << "NIM\t\t: " << nim << endl;
  cout << "Kelas\t\t: " << kelas << endl;
}