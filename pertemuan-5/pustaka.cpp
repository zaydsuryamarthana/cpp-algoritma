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

void outputNode(int n, DataNode *head) {
  DataNode *current = head;
  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

void inputFront(DataNode *&head, int value) {
  DataNode *newNode = new DataNode();
  newNode->data = value;
  newNode->next = head;

  head = newNode; 
}

void deleteFront(DataNode *&head) {
  if (head == nullptr) {
    cout << "Tidak ada data Linked List" << endl;
    return;
  }
  DataNode *hapus = head;
  head = head->next;
  delete hapus;
}