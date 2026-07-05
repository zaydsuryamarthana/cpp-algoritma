#include "header.h"
#include <iostream>

using namespace std;

void inputNode(int n, DataNode *&head, DataNode *&tail) {
  for (int i = 1; i <= n; i++) {
    int value;
    cout << "Masukkan data ke - " << i << " : ";
    cin >> value;

    DataNode *newNode = new DataNode();

    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }
}

void outputNode(DataNode *head) {
  DataNode *current = head;
  if (!head) {
    cout << "- No Data -" << endl;
    cout << "--------------------" << endl;
  } else {
    cout << "- Data Linked List -" << endl;
    cout << "--------------------" << endl;
    while (current != nullptr) {
      cout << current->data << " ";
      current = current->next;
    }
  }

  cout << endl;
}

void inputFront(DataNode *&head, int value) {
  DataNode *newNode = new DataNode();
  newNode->data = value;
  newNode->next = head;

  head = newNode;
}

void inputBack(DataNode *&head, DataNode *&tail, int value) {
  DataNode *newNode = new DataNode();
  newNode->data = value;
  if (head == tail) {
    tail = newNode;
  } else {
    tail->next = newNode;
    tail = newNode;
  }
}

void deleteFront(DataNode *&head) {
  if (head == nullptr) {
    cout << "Tidak ada data yang dihapus" << endl;
    return;
  }
  DataNode *hapus = head;
  head = head->next;
  delete hapus;
}

void deleteBack(DataNode *&head, DataNode *&tail) {

  DataNode *curr = head;
  DataNode *prev = nullptr;

  if (head == nullptr) {
    cout << "Tidak ada data Linked List" << endl;
    return;
  }

  while (curr->next != nullptr) {
    prev = curr;
    curr = curr->next;
  }
  tail = prev;
  prev->next = nullptr;
  delete curr;
}