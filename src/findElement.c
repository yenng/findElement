#include "findElement.h"
#include "simpleList.h"
#include <stdio.h>
#include <malloc.h>
Element *listFind(List *list, int *value){
  Element *elem = malloc(sizeof(Element));
  
  elem = list->head;
  
  
   while(elem->data != value)
    elem = elem->next;
  
  return elem;
}
