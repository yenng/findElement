#ifndef simpleList_H
#define simpleList_H

typedef struct Element_t Element;
typedef struct List list;

typedef struct{
  Element *head;
  void *length;
}List; 

struct Element_t{
  Element *next;
  int *data;
};
Element *elementCreate(void *data);
List *listCreate();
#endif // simpleList_H
