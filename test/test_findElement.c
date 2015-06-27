#include "unity.h"
#include "findElement.h"
#include "simpleList.h"

void setUp(void){}

void tearDown(void){}

void test_find_Element(){
  int value1 = 1;
  int myValue1 = 1;
  int value3 = 3;
  int value4 = 4;
  int value6 = 6;
  int value7 = 7;
  
  List *list = listCreate();
  Element *elem, *elemNext;
  
  elem = elementCreate(&value4);
  elemNext = elementCreate(&value6);
  elem->next = elemNext;
  
  elemNext = elem;
  elem = elementCreate(&value1);
  elem->next = elemNext;
  
  elemNext = elem;
  elem = elementCreate(&value7);
  elem->next = elemNext;
  
  elemNext = elem;
  elem = elementCreate(&value3);
  elem->next = elemNext;
  list->head = elem;
  
  elem = NULL;
  elem = listFind(list,&myValue1,Compare);
  
  TEST_ASSERT_NOT_NULL(elem);
  TEST_ASSERT_NOT_NULL(elem->data);
  TEST_ASSERT_EQUAL(myValue1,*(int*)(elem->data));
}
void test_find_Element_string(){
  char* str1 = "one";
  char* myStr1 = "one";
  char* str3 = "three";
  char* str4 = "four";
  char* str6 = "six";
  char* str7 = "seven";
  
  List *list = listCreate();
  Element *elem, *elemNext;
  
  elem = elementCreate(str4);
  elemNext = elementCreate(str6);
  elem->next = elemNext;
  
  elemNext = elem;
  elem = elementCreate(str1);
  elem->next = elemNext;
  
  elemNext = elem;
  elem = elementCreate(str7);
  elem->next = elemNext;
  
  elemNext = elem;
  elem = elementCreate(str3);
  elem->next = elemNext;
  list->head = elem;
  
  elem = NULL;
  elem = listFind(list,myStr1,strCompare);
  printf( (char*)(elem->data));
  
  
  TEST_ASSERT_NOT_NULL(elem);
  TEST_ASSERT_NOT_NULL(elem->data);
  TEST_ASSERT_EQUAL_STRING(myStr1,(char*)(elem->data));
}
