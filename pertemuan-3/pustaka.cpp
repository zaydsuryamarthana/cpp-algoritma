#include "header.h"
#include <ios>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

struct dataMahasiswa {
  int umur;
  string nama;
};

class bubbleMahasiswa {
private:
  int n;
  dataMahasiswa *data;

public:
  void input() {
    cout << "\nMasukkan jumlah data mahasiswa : ";
    cin >> n;
    data = new dataMahasiswa[n];
  }

  void proses() {
    cout << "\nLengkapi identitas mahasiswa" << endl;
    cout << "----------------------------" << endl;
    for (int i = 0; i < n; i++) {
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Identitas Mahasiswa ke - " << i + 1 << endl;
      cout << "Nama Lengkap\t: ";
      getline(cin, data[i].nama);
      cout << "Umur\t\t: ";
      cin >> data[i].umur;
    }
  }

  void algoritma(bool algoritma) {
    int temp;
    char sort;
    cout << "\nMemproses data meggunakan Algoritma Bubble Sort" << endl;
    cout << "---------------------" << endl;
    cout << "Masukkan pengurutan data berdasarkan (nama 'n' / umur 'u') : ";
    cin >> sort;
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < n - i; j++) {
        bool condition = false;

        if (sort == 'n' || sort == 'N') {
          condition = algoritma ? (data[j].nama > data[j + 1].nama)
                                : (data[j].nama < data[j + 1].nama);
        } else if (sort == 'u' || sort == 'U') {
          condition = algoritma ? (data[j].umur > data[j + 1].umur)
                                : (data[j].umur < data[j + 1].umur);
        } else {
          cout << "Tidak ada " << endl;
        }
        if (condition) {
          dataMahasiswa temp = data[j];
          data[j] = data[j + 1];
          data[j + 1] = temp;
        }
      }
    }
  }

  void output() {
    cout << "\nData Mahasiswa UDINUS 2026" << endl;
    cout << "------------------------------" << endl;
    for (int i = 0; i < n; i++) {
      cout << "Nama lengkap\t: " << data[i].nama << endl;
      cout << "Umur\t\t: " << data[i].umur << endl;
      cout << "------------------------------" << endl;
    }
  }
};

class bubbleSort {
private:
  int n;
  int *arr;

public:
  void input() {
    cout << "Nilai panjang array : ";
    cin >> n;
    arr = new int[n];
  }
  void proses() {
    cout << "\nMasukkan nilai setiap index array" << endl;
    for (int i = 0; i < n; i++) {
      cout << "Nilai ke - " << i + 1 << " : ";
      cin >> arr[i];
    }
  }
  void algoritma(bool algoritma) {
    int temp;
    cout << "Memproses Data Algoritma Bubble Sort" << endl;
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < n - i; j++) {
        bool condition =
            algoritma ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1]);

        if (condition) {
          temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
  }
  void cetak() {
    cout << "Data Array : ";
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << '\n';
  }
};

void kasus1P3() {
  bubbleSort data;
  cout << "Program Algoritma Bubble Sort Ascending" << endl;
  data.input();
  data.proses();
  data.cetak();
  data.algoritma(false);
  data.cetak();
}

void kasus2P3() {
  bubbleMahasiswa identitas;
  cout << "\nProgram Algoritma Bubble Sort Mahasiswa" << endl;
  cout << "---------------------------------------" << endl;
  identitas.input();
  identitas.proses();
  identitas.algoritma(true);
  identitas.output();
}