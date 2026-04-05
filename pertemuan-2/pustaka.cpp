#include "header.h"
#include <iostream>
#include <string>
using namespace std;

struct keranjang {
  int id;
  string nama;
  int harga;
};

class dataMahasiswa {
private:
  string nim;
  string nama;
  string email;
  string telp;
  string alamat;

public:
  void inputIdentitas() {
    cout << "Nama Lengkap\t: ";
    cin >> nama;
    cout << "Nomor Induk Mahasiswa\t: ";
    cin >> nim;
    cout << "Email\t: ";
    cin >> email;
    cout << "Nomor Telepon\t: ";
    cin >> telp;
    cout << "Alamat\t: ";
    cin >> alamat;
  }

  void cetakIdentitas(string dataNim, string dataNama, string dataEmail,
                      string dataTelp, string dataAlamat) {
    nim = dataNim;
    nama = dataNama;
    email = dataEmail;
    telp = dataTelp;
    alamat = dataAlamat;

    cout << "Nama lengkap\t: " << nama << endl;
    cout << "Nomor Induk Mahasiswa\t: " << nim << endl;
    cout << "Email\t: " << email << endl;
    cout << "Nomor Telepon\t: " << telp << endl;
    cout << "Alamat\t: " << alamat << endl;
  }
};

void kasus1P2() {
  keranjang data;
  cout << "\nReview Constructor C++" << endl;
  cout << "----------------------" << endl;

  data.id = 1;
  data.nama = "MSI GTX 1650 Super";
  data.harga = 1600000;

  cout << "Keranjang Shopee " << endl;
  cout << "No Barang\t: " << data.id << endl;
  cout << "Nama Barang\t: " << data.nama << endl;
  cout << "Harga Barang\t: Rp." << data.harga << endl;
}

void kasus2P2() {
  dataMahasiswa data;
  cout << "\nClass dan Object" << endl;
  cout << "----------------------" << endl;
  data.inputIdentitas();
  data.cetakIdentitas("A11.2025.16417", "Zayd Surya Marthana",
                      "zayd@example.email.com", "0941285742", "Semarang");
}