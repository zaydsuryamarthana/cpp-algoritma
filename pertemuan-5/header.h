#ifndef PERTEMUAN_5_H
#define PERTEMUAN_5_H

struct DataNode {
  int data;
  DataNode *next;
};

void pertemuan5();
void inputNode(int n, DataNode *&head, DataNode *&tail);
void outputNode(int n, DataNode *head);
void inputFront(DataNode *&head, int value);
void deleteFront(DataNode *&head);

#endif