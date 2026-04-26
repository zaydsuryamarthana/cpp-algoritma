#ifndef HEADER_TUGAS_H
#define HEADER_TUGAS_H

struct baseData {
protected:
  int data;
  int *arr;
  int *temp;

public:
  void setData(int n);
  int getSize();
  int *getData();
  int getArray(int index);
  void setArray(int index, int value);
  void resetArray(int index);

  baseData() { data = 0; }
};

struct nodeData {
  int data;
  nodeData *next;
};

void information();

void algoritmaBubble(int *arr, int n);
void algoritmaInsertion(int *arr, int n);
void algoritmaSelection(int *arr, int n);

void algoritmaLinear(int *arr, int n, int search);
void algoritmaBinary(int *arr, int n, int search);

void inputData(baseData &data);
void outputData(baseData &data);

void declareNode(nodeData *&head, nodeData *&tail, int n);
void outputNode(nodeData *head);
void inputFront(nodeData *&head);
void inputNear(nodeData *&head);
void deleteFront(nodeData *&head);
void deleteNear(nodeData *&head);
#endif