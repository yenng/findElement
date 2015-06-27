#ifndef findElement_H
#define findElement_H
#include "simpleList.h"

int Compare(void *first, void *second);
int strCompare(void *first, void *second);
Element *listFind(List *list, void *value, int(*Compare)(void *, void *));
#endif // findElement_H
