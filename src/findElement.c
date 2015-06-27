#include "findElement.h"
#include "simpleList.h"
#include <stdio.h>
#include <malloc.h>

int Compare(void *first, void *second){
  int *firstValue = (int *)(first);
  int *secondValue = (int *)(second);
  if(*firstValue == *secondValue)
    return 1;
  else
    return 0;
  
}
int strCompare(void *first, void *second){
  char *firstValue = (char *)(first);
  char *secondValue = (char *)(second);
  if(strcmp(firstValue,secondValue)==0)
    return 1;
  else
    return 0;
}
Element *listFind(List *list, void *value, int(*Compare)(void *, void *)){
  Element *elem = malloc(sizeof(Element));
  
  elem = list->head;
  
  
  while(Compare (elem->data, value) == 0)
    elem = elem->next;
  printf("%d %c", *(char*)(elem->data));  
  return elem;
}
