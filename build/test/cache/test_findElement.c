#include "simpleList.h"
#include "findElement.h"
#include "unity.h"


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



  elem = ((void *)0);

  elem = listFind(list,&myValue1,Compare);



  if ((((elem)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)40);;};

  if ((((elem->data)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)41);;};

  UnityAssertEqualNumber((_U_SINT)((myValue1)), (_U_SINT)((*(int*)(elem->data))), (((void *)0)), (_U_UINT)42, UNITY_DISPLAY_STYLE_INT);

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



  elem = ((void *)0);

  elem = listFind(list,myStr1,strCompare);

  printf( (char*)(elem->data));





  if ((((elem)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)77);;};

  if ((((elem->data)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)78);;};

  UnityAssertEqualString((const char*)(myStr1), (const char*)((char*)(elem->data)), (((void *)0)), (_U_UINT)79);

}
