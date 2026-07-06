#include "header.h"
#include <cstddef>
#include <iostream>
#include <string>

using namespace std;

void doubleLinkedListCircular::menu() {
  int pilihan;
  string nama;
  do {
    cout << "\nProgram Double Linked List Circular" << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Tambah Depan" << endl;
    cout << "2. Tambah Belakang" << endl;
    cout << "3. Tambah Tengah" << endl;
    cout << "4. Hapus Depan" << endl;
    cout << "5. Hapus Belakang" << endl;
    cout << "6. Hapus Tengah" << endl;
    cout << "\nPilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      doubleLinkedListCircular::insertFront(head, "Buku");
      doubleLinkedListCircular::insertFront(head, "Laptop");
      doubleLinkedListCircular::insertFront(head, "PC");
      doubleLinkedListCircular::displayData(head);
      break;
    case 2:
      doubleLinkedListCircular::insertBack(tail, "Tiang");
      doubleLinkedListCircular::displayData(head);
      break;
    case 3:
      doubleLinkedListCircular::insertMiddle(head, tail, "Pensil", 2);
      doubleLinkedListCircular::displayData(head);
      break;
    case 4:
      doubleLinkedListCircular::deleteFront(head);
      doubleLinkedListCircular::displayData(head);
      break;
    case 5:
      doubleLinkedListCircular::deleteBack(tail);
      doubleLinkedListCircular::displayData(head);
      break;
    case 6:
      doubleLinkedListCircular::deleteMiddle(head, tail, 2);
      doubleLinkedListCircular::displayData(head);
      break;
    }
  } while (pilihan != 0);
}

void doubleLinkedListCircular::input(std::string &nama) {
  cout << "------------------------------" << endl;
  cout << "Masukkan data nama barang : ";
  cin >> nama;
  cout << "------------------------------" << endl;
}

void doubleLinkedListCircular::insertFront(Node *&head, std::string nama) {
  newNode = new Node();
  newNode->namaBarang = nama;
  if (head == NULL) {
    head = newNode;
    tail = newNode;
    newNode->next = newNode;
    newNode->prev = newNode;
  } else {
    newNode->next = head;
    newNode->prev = tail;
    head->prev = newNode;
    tail->next = newNode;
    head = newNode;
  }
}

void doubleLinkedListCircular::insertBack(Node *&tail, std::string nama) {
  newNode = new Node();
  newNode->namaBarang = nama;
  if (head == NULL) {
    head = newNode;
    tail = newNode;
    newNode->next = newNode;
    newNode->prev = newNode;
  } else {
    newNode->next = head;
    newNode->prev = tail;
    head->prev = newNode;
    tail->next = newNode;
    tail = newNode;
  }
}

void doubleLinkedListCircular::insertMiddle(Node *&head, Node *&tail,
                                            std::string nama, int position) {
  curr = head;
  newNode = new Node();
  newNode->namaBarang = nama;
  int iterasi = 1;
  while (iterasi < position - 1) {
    curr = curr->next;
    iterasi++;
  }
  afterNode = curr->next;
  newNode->next = afterNode;
  newNode->prev = curr;
  curr->next = newNode;
  afterNode->prev = newNode;
}

void doubleLinkedListCircular::deleteFront(Node *&head) {
  del = head;
  head = head->next;
  head->prev = tail;
  tail->next = head;
  delete del;
}

void doubleLinkedListCircular::deleteBack(Node *&tail) {
  del = tail;
  tail = tail->prev;
  head->prev = tail;
  tail->next = head;
  delete del;
}

void doubleLinkedListCircular::deleteMiddle(Node *&head, Node *&tail,
                                            int position) {
  curr = tail;
  int iterasi = 1;
  while (iterasi < position - 1) {
    curr = curr->prev;
    iterasi++;
  }
  del = curr;
  afterNode = del->next;
  prevNode = del->prev;

  prevNode->next = afterNode;
  afterNode->prev = prevNode;
  delete del;
}

void doubleLinkedListCircular::displayData(Node *head) {
  curr = head;
  do {
    cout << curr->namaBarang << ", ";
    curr = curr->next;
  } while (curr != head);
}

void stackLinkedList::menu() {
  int pilihan;
  string nama;
  do {
    cout << "\nProgram Stack Linked List" << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Push Data" << endl;
    cout << "2. Pop Data" << endl;
    cout << "3. Peek Data" << endl;
    cout << "4. Change Data" << endl;
    cout << "5. Destroy Data" << endl;
    cout << "\nPilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      stackLinkedList::pushData(head, tail, "Buku");
      stackLinkedList::pushData(head, tail, "Minuman");
      stackLinkedList::pushData(head, tail, "VGA");
      stackLinkedList::pushData(head, tail, "PC");
      stackLinkedList::displayData(tail);
      break;
    case 2:
      stackLinkedList::popData(tail);
      stackLinkedList::displayData(tail);
      break;
    case 3:
      stackLinkedList::peekData(head, tail, 2);
      break;
    case 4:
      stackLinkedList::changeData(head, tail, "Router", 2);
      break;
    case 5:
      stackLinkedList::destroyData(head, tail);
      break;
    default:
      break;
    }
  } while (pilihan != 0);
}

void stackLinkedList::pushData(Node *&head, Node *&tail, std::string nama) {
  newNode = new Node();
  newNode->namaBarang = nama;
  newNode->next = NULL;
  if (head == NULL) {
    head = newNode;
    tail = newNode;
    newNode->prev = NULL;
  } else {
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
  }
}

void stackLinkedList::popData(Node *&tail) {
  del = tail;
  tail = tail->prev;
  tail->next = NULL;
  delete del;
}

void stackLinkedList::peekData(Node *&head, Node *&tail, int position) {
  curr = tail;
  int iterasi = 1;
  while (iterasi < position) {
    curr = curr->prev;
    iterasi++;
  }
  cout << "Data | " << position << " : " << curr->namaBarang << endl;
}

void stackLinkedList::changeData(Node *&head, Node *&tail, std::string nama,
                                 int position) {
  curr = tail;
  int iterasi = 1;
  while (iterasi < position) {
    curr = curr->prev;
    iterasi++;
  }
  curr->namaBarang = nama;
  stackLinkedList::displayData(tail);
}

void stackLinkedList::destroyData(Node *&head, Node *&tail) {
  curr = tail;
  while (curr != NULL) {
    del = curr;
    curr = curr->prev;
    delete del;
  }
  head = NULL;
  tail = NULL;
  stackLinkedList::displayData(tail);
}

void stackLinkedList::displayData(Node *tail) {
  curr = tail;
  if (tail == NULL) {
    cout << "Data tidak ada" << endl;
  } else {
    while (curr != NULL) {
      cout << "Data : " << curr->namaBarang << endl;
      curr = curr->prev;
    }
  }
}

void queueLinkedList::menu() {
  int pilihan;
  string nama;
  do {
    cout << "\nProgram Queue Linked List" << endl;
    cout << "-------------------------" << endl;
    cout << "1. Enqueue Data" << endl;
    cout << "2. Dequeue Data" << endl;
    cout << "3. Peek Data" << endl;
    cout << "4. Change Data" << endl;
    cout << "5. Destroy Data" << endl;
    cout << "\nPilih salah satu program : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    default:
      break;
    }
  } while (pilihan != 0);
}

void queueLinkedList::enqueueData(Node *&head, Node *&tail, std::string nama) {
  newNode = new Node();
  newNode->namaBarang = nama;
  newNode->prev = NULL;
  if (head == NULL) {
    head = newNode;
    tail = newNode;
    newNode->next = NULL;
  } else {
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
  }
}