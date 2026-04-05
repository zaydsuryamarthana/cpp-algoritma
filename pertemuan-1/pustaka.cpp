#include "header.h"
#include <cmath>
#include <ios>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

double kasus1Soal1P1(double a) { return a * a * a + 7; }
double kasus1Soal2P1(double a, double b, double c, double x) {
  return pow((a * x), 2) + (b * x) + c;
}

typedef struct {
  double sum;
  double average;
} kasus1Soal3P1;

kasus1Soal3P1 outputSoal3(double a, double b, double c, double d, double e) {
  kasus1Soal3P1 data;
  data.sum = a + b + c + d + e;
  data.average = data.sum / 5;

  return data;
}

typedef struct {
  double celcius;
  double reamur;
  double farenheit;
  double kelvin;
} kasus1Soal4P1;

kasus1Soal4P1 outputSoal4(double data) {
  kasus1Soal4P1 konversi;
  konversi.reamur = (4.0 / 5.0) * data;
  konversi.farenheit = (9.0 / 5.0) * data + 32;
  konversi.kelvin = data + 273;

  return konversi;
}

typedef struct {
  int upahReguler;
  double overpay;
  int totalUpah;
} kasus2Soal1P1;

kasus2Soal1P1 outputSoa1(int jamKerja, int upah) {
  kasus2Soal1P1 data;
  data.upahReguler = upah * jamKerja;

  if (jamKerja >= 30) {
    data.overpay = (jamKerja - 30) * upah * (40.0 / 100.0);

  } else if (jamKerja < 30) {
    data.overpay = upah * (20.0 / 100.0);
  } else {
    data.overpay = 0;
  }
  data.totalUpah = data.upahReguler + data.overpay;

  return data;
}

void kasus3Soal1P1(int a, int b) {
  cout << "Hasil Perulangan\t: ";

  if (a > b) {
    b *= 2;
  }

  if (b >= a) {
    for (int i = b; i >= a; i--) {
      cout << i << " ";
    }
  } else {
    cout << "Nilai B masih lebih kecil dari A" << endl;
  }
}

class ArrayData {
private:
  int n;
  int arr[100];
  int up = 0, down = 10000, sum = 0;

public:
  void inputArray(int n) {
    this->n = n;
    for (int i = 0; i < n; i++) {
      cout << "Masukkan nilai ke - " << i + 1 << " : ";
      cin >> arr[i];

      if (arr[i] > up) {
        up = arr[i];
      }

      if (arr[i] < down) {
        down = arr[i];
      }

      sum = arr[i] + sum;
    }
  }
  void cetakArray(int n) {
    cout << "Hasil dari array : ";
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
  }

  int getSum() { return sum; }
  int getMax() { return up; }
  int getMin() { return down; }
};

typedef struct kasus5Soal1 {
  int x;
  int y;
} adtStructure;

class FungsiProsedur {
private:
  int n;
  int arr[100];
  int sum = 0;

public:
  int luasPersegi(int n) { return n * n; }
  bool isGanjil(int n) {
    if (n % 2 == 0) {
      return false;
    } else {
      return true;
    }
  }
  bool isGenap(int n) {
    if (n % 2 == 0) {
      return true;
    } else {
      return false;
    }
  }
  int sumArray(int n) {
    for (int i = 1; i <= n; i++) {
      arr[i] = i;
      sum = arr[i] + sum;
    }
    return sum;
  }
  float averageData(float nilai, float data) {
    float hasil = data / n;
    return hasil;
  }
};

void kasus1P1() {
  int soal;
  do {
    cout << "\nSoal-Soal Review Variable dan Assignment" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Soal 1 : y = a^3 + 7, Tentukan hasil dari y" << endl;
    cout << "Soal 2 : y = ax^2 + bx + c, Tentukan hasil dari y" << endl;
    cout << "Soal 3 : Program menghitung AVERAGE & SUM" << endl;
    cout << "Soal 4 : Program konversi suhu celcius" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Kembali 0" << endl;
    cout << "\nPilih salah satu soal : ";
    cin >> soal;

    switch (soal) {
    case 1:
      cout << "-------------------------------------" << endl;
      cout << "Soal 1 : y = a^3 + 7" << endl;
      cout << "-------------------------------------" << endl;
      cout << "a : " << "2" << endl;
      cout << "\nJawabannya adalah : ";
      cout << kasus1Soal1P1(2) << endl;
      break;
    case 2:
      cout << "-------------------------------------" << endl;
      cout << "Soal 2 : y = ax^2 + bx + c" << endl;
      cout << "-------------------------------------" << endl;
      cout << "a : " << "2" << endl;
      cout << "b : " << "3" << endl;
      cout << "c : " << "1" << endl;
      cout << "x : " << "4" << endl;
      cout << "\nJawabannya adalah : ";
      cout << kasus1Soal2P1(2, 3, 1, 4) << endl;
      break;
    case 3: {

      kasus1Soal3P1 hasil = outputSoal3(2, 3, 7, 9, 12);
      cout << "-----------------------------------------" << endl;
      cout << "Soal 3 : Program Menghitung SUM & AVERAGE" << endl;
      cout << "-----------------------------------------" << endl;
      cout << "Hasil dari penjumlahan\t: " << hasil.sum << endl;
      cout << "Hasil dari rata-rata\t: " << hasil.average << endl;
      break;
    }
    case 4: {
      kasus1Soal4P1 hasil = outputSoal4(39);
      cout << "------------------------------" << endl;
      cout << "Soal 4 : Konversi Suhu Celcius" << endl;
      cout << "------------------------------" << endl;
      cout << "Konversi Reamur\t: " << hasil.reamur << endl;
      cout << "Konversi Farenheit\t: " << hasil.farenheit << endl;
      cout << "Konversi Kelvin\t: " << hasil.kelvin << endl;
      break;
    }
    }

  } while (soal != 0);
}

void kasus2P1() {
  int upah, jamKerja;
  string nama, tempat;
  cout << "\nProgram Upah Lembur Karyawan" << endl;
  cout << "----------------------------" << endl;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cout << "Masukkan Nama Lengkap\t: ";
  getline(cin, nama);
  cout << "Masukkan upah kerja\t: Rp. ";
  cin >> upah;
  cout << "Masukkan jam kerja\t: ";
  cin >> jamKerja;

  cout << '\n';

  kasus2Soal1P1 hasil = outputSoa1(jamKerja, upah);

  cout << "---------------------------------------------" << endl;
  cout << "Nama Lengkap\t: " << nama << endl;
  cout << "Upah Kerja\t: " << "Rp. " << upah << endl;
  cout << "Jam Kerja\t: " << jamKerja << endl;
  cout << "---------------------------------------------" << endl;
  cout << "Upah Reguler\t : " << "Rp. " << hasil.upahReguler << endl;
  cout << "Total Upah\t : " << "Rp. " << hasil.totalUpah << endl;
}

void kasus3P1() {
  int a, b;
  cout << "\nProgram Perulangan Angka" << endl;
  cout << "------------------------" << endl;
  cout << "Masukkan nilai A\t: ";
  cin >> a;
  cout << "Masukkan nilai B\t: ";
  cin >> b;

  kasus3Soal1P1(a, b);

  cout << '\n';
}

void kasus4P1() {
  ArrayData fungsi;
  int n;
  cout << "\nProgram Array MAX, MIN, SUM, AVERAGE" << endl;
  cout << "------------------------------------" << endl;
  cout << "Masukkan nilai n : ";
  cin >> n;

  cout << '\n';
  fungsi.inputArray(n);
  fungsi.cetakArray(n);

  cout << "Hasil dari penjumlahan\t: " << fungsi.getSum() << endl;
  cout << "Nilai terkecil adalah\t: " << fungsi.getMin() << endl;
  cout << "Nilai terbesar adalah\t: " << fungsi.getMax() << endl;
}

void kasus5P1() {
  adtStructure nilai;
  cout << "\nProgram ADT Structure" << endl;
  cout << "---------------------" << endl;

  nilai.x = 5;
  nilai.y = 10;

  cout << "Nilai dari Structure X : " << nilai.x << endl;
  cout << "Nilai dari Structure Y : " << nilai.y << endl;
}

void kasus6P1() {
  int nilai;
  FungsiProsedur data;
  cout << "\nProgram Fungsi dan/atau Prosedur" << endl;
  cout << "--------------------------------" << endl;
  cout << "Masukkan melakukan pengolahan bilangan integer : ";
  cin >> nilai;

  cout << "Nilai Luas Persegi\t: " << data.luasPersegi(nilai) << endl;
  cout << "Apakah nilai-nya Ganjil\t: " << data.isGanjil(nilai) << endl;
  cout << "Apakah nilai-nya Genap\t: " << data.isGenap(nilai) << endl;
  cout << "Penjumlahan integer\t: " << data.sumArray(nilai) << endl;
  cout << "Rata-rata integer\t: "
       << data.averageData(nilai, data.sumArray(nilai)) << endl;
}

void kasus7P1() {
  int i = 15, *p, *q;
  // "i" sebagai deklarasi awal variabel dengan nilai 15 dibantu dengan dua
  // pointer yaitu p dan q Pointer guna menunjukkan alamat memori dari deklarasi
  // variabel
  // "p = &i" disini maksudnya merujuk pada variabel "i" sebagai alamat memori,
  // sehingga nilai "p" akan merujuk pada alamat memori variabel "i" bukan nilai
  // integer sebagai contoh alamat "i" adalah 0x7fffa43747ac maka p memiliki
  // alamat dari "i"

  // Sebelumnya kan "p" itu merujuk ke alamat variabel "i", maka perubahan nilai
  // dari variabel "i" Dilakukan dengan cara mencari alamat variabel "i" dan
  // mengubah nilainya

  // p = Alamat variabel "i"
  // *p = Nilai perubahan variabel

  // q = masih kosong belum deklarasikan

  cout << "\nPengenalan Pointer Data" << endl;
  cout << "------------------------" << endl;
  cout << "Nilai i\t\t\t: " << i << endl;
  p = &i;
  *p = 20;
  cout << "Alamat i\t\t: " << p << endl;
  cout << "Nilai p\t\t\t: " << *p << endl;
  cout << "Nilai i saat ini\t: " << i << endl;
}