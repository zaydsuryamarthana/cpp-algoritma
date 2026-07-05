#include "header.h"
#include "pertemuan-1/header.h"
#include "pertemuan-11/header.h"
#include "pertemuan-2/header.h"
#include "pertemuan-3/header.h"
#include "pertemuan-4/header.h"
#include "pertemuan-5/header.h"
#include "pertemuan-6/header.h"
#include "pertemuan-7/header.h"
#include <iostream>
using namespace std;

int main() {
  int pilihan;
  cetakIdentitas();
  do {
    cout << "\nMATA KULIAH ALGORITMA & STRUKTUR DATA" << endl;
    cout << "--------------------------------------" << endl;
    cout << "1. Review Dasar Pemrograman" << endl;
    cout << "2. Kelas dan Objek" << endl;
    cout << "3. Algoritma Pengurutan" << endl;
    cout << "4. Algoritma Pencarian" << endl;
    cout << "5. Single Linked List Non-Circular" << endl;
    cout << "6. Single Linked List Circular" << endl;
    cout << "7. Double Linked List Non-Circular" << endl;
    cout << "8. Double Linked List Circular" << endl;
    cout << "9. Stack Array & Linked List" << endl;
    cout << "10. Queue Array & Linked List" << endl;
    cout << "11. Binary Tree" << endl;
    cout << "--------------------------------------" << endl;
    cout << "\nPilih salah satu pertemuan : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      pertemuan1();
      break;
    case 2:
      pertemuan2();
      break;
    case 3:
      pertemuan3();
      break;
    case 4:
      pertemuan4();
      break;
    case 5:
      pertemuan5();
      break;
    case 6:
      pertemuan6();
      break;
    case 7:
      pertemuan7();
      break;
    case 11:
      pertemuan11();
      break;
    }
  } while (pilihan != 0);
  return 0;
}