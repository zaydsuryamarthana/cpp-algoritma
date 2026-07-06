#ifndef PERTEMUAN_UAS_H
#define PERTEMUAN_UAS_H

#include <string>

struct Node {
  int data;
  std::string namaBarang;
  Node *next, *prev;
};

class doubleLinkedListCircular {
protected:
  Node *head = NULL, *tail = NULL, *curr, *del, *newNode, *afterNode, *prevNode;

public:
  void menu();
  void input(std::string &nama);
  void insertFront(Node *&head, std::string nama);
  void insertBack(Node *&tail, std::string nama);
  void insertMiddle(Node *&head, Node *&tail, std::string nama, int position);
  void deleteFront(Node *&head);
  void deleteBack(Node *&tail);
  void deleteMiddle(Node *&head, Node *&tail, int position);
  void displayData(Node *head);
};

class stackLinkedList {
protected:
  Node *head = NULL, *tail = NULL, *curr, *del, *newNode, *afterNode, *prevNode;

public:
  void menu();
  void pushData(Node *&head, Node *&tail, std::string nama);
  void popData(Node *&tail);
  void peekData(Node *&head, Node *&tail, int position);
  void changeData(Node *&head, Node *&tail, std::string nama, int position);
  void destroyData(Node *&head, Node *&tail);
  void displayData(Node *tail);
};

class queueLinkedList {
protected:
  Node *head, *tail, *curr, *del, *newNode, *afterNode, *prevNode;

public:
  void menu();
  void enqueueData(Node *&head, Node *&tail, std::string nama);
  void dequeueData(Node *&head);
  void peekData(Node *&head, Node *&tail, int position);
  void changeData(Node *&head, Node *&tail, std::string nama, int position);
  void destroyData(Node *&head, Node *&tail);
  void displayData(Node *head);
};

#endif