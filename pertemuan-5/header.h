#ifndef PERTEMUAN_5_H
#define PERTEMUAN_5_H

#include "../header.h"
void pertemuan5();
void inputNode(int n, DataNode *&head, DataNode *&tail);
void outputNode(DataNode *head);
void inputFront(DataNode *&head, int value);
void inputBack(DataNode *&head, DataNode *&tail, int value);
void deleteFront(DataNode *&head);
void deleteBack(DataNode *&head, DataNode *&tail);

#endif