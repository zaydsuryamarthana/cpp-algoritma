#ifndef PERTEMUAN_7_H
#define PERTEMUAN_7_H

struct DataDoubleNode {
  int data;
  DataDoubleNode *next, *prev;
};

void pertemuan7();
void inputData(int &data, bool action, int &position);
void addFront(DataDoubleNode *&head, DataDoubleNode *&tail, int data);
void addBack(DataDoubleNode *&head, DataDoubleNode *&tail, int data);
void addMiddle(DataDoubleNode *&head, DataDoubleNode *&tail, int data,
               int position);
void deleteFront(DataDoubleNode *&head, DataDoubleNode *&tail);
void deleteBack(DataDoubleNode *&head, DataDoubleNode *&tail);
void printNode(DataDoubleNode *head);
#endif
