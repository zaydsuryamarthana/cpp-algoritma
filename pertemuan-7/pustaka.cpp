#include "header.h"
#include <cstddef>
#include <iostream>

using namespace std;

void inputData(int &data, bool action, int &position) {
  cout << "------------------------------" << endl;
  cout << "Masukkan data Node : ";
  cin >> data;
  if (action == true) {
    cout << "Masukkan posisi data : ";
    cin >> position;
  }
  cout << "------------------------------" << endl;
}

void addFront(DataDoubleNode *&head, DataDoubleNode *&tail, int data) {
  DataDoubleNode *newNode = new DataDoubleNode();
  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;
  if (head == NULL) {
    head = newNode;
    tail = newNode;
  } else {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
}

void addBack(DataDoubleNode *&head, DataDoubleNode *&tail, int data) {
  DataDoubleNode *newNode = new DataDoubleNode();
  newNode->data = data;
  newNode->next = NULL;
  if (head == NULL) {
    head = newNode;
    tail = newNode;
  } else {
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
  }
}

void addMiddle(DataDoubleNode *&head, DataDoubleNode *&tail, int data,
               int position) {
  DataDoubleNode *newNode = new DataDoubleNode();
  newNode->data = data;
  if (head == NULL) {
    head = newNode;
    tail = newNode;
  }
  DataDoubleNode *curr = head;
  for (int i = 1; i < position - 1; i++) {
    curr = curr->next;
  }
  DataDoubleNode *nextNode = curr->next;
  newNode->next = nextNode;
  newNode->prev = curr;
  curr->next = newNode;
  nextNode->prev = newNode;
}

void deleteFront(DataDoubleNode *&head, DataDoubleNode *&tail) {
  DataDoubleNode *del = head;
  if (head == NULL) {
    cout << "Tidak ada data yang dihapus!" << endl;
    return;
  }
  if (head->next == NULL) {
    head = NULL;
    tail = NULL;
  } else {
    head = head->next;
    head->prev = NULL;
    delete del;
  }
}

void deleteBack(DataDoubleNode *&head, DataDoubleNode *&tail) {
  DataDoubleNode *del = tail;
  if (head == NULL) {
    cout << "Tidak ada data yang dihapus!" << endl;
    return;
  }

  if (head->next == NULL) {
    head = NULL;
    tail = NULL;
  } else {
    tail = tail->prev;
    tail->next = NULL;
    delete del;
  }
}

void printNode(DataDoubleNode *head) {
  DataDoubleNode *curr = head;
  cout << "Data Node Double Linked List : ";
  while (curr != NULL) {
    cout << curr->data << " ";
    curr = curr->next;
  }
}