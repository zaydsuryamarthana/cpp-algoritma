#include "header.h"
#include <iostream>

using namespace std;

void inputNodeCircullar(DataNode *&head, DataNode *&tail, int n) {
  for (int i = 1; i <= n; i++) {
    int value;
    cout << "Masukkan data Node - " << i << " : ";
    cin >> value;
    DataNode *newNode = new DataNode();
    newNode->data = value;
    if (head == nullptr) {
      head = newNode;
      tail = newNode;
      tail->next = head;
    } else {
      tail->next = newNode;
      tail = newNode;
      tail->next = head;
    }
  }
}

void outputNodeCircullar(DataNode *head, DataNode *tail) {
  DataNode *current = head;
  if (head == nullptr) {
    cout << "- No Data -" << endl;
    cout << "--------------------" << endl;
    return;
  }
  do {
    cout << current->data << " ";
    current = current->next;
  } while (current != head);
}
