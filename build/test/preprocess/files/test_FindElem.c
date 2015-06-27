#include "simpleList.h"
#include "FindElem.h"
#include "unity.h"




void setUp(void){}



void tearDown(void){}



void test_findElement(){

  int value1 = 1;

  int value3 = 3;

  int value4 = 4;

  int value6 = 6;

  int value7 = 7;



  List *list = listCreate();

  Element *elem,*elemNext;



  elemNext = elementCreate(&value6);

  elem = elementCreate(&value4);

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

  elemNext = elem;



  list->head = elem;





  elem = listFind(list,&value1);















   UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((*(int *)(elem->data))), (((void *)0)), (_U_UINT)50, UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((_U_SINT)((list->head->data)), (_U_SINT)((&value1)), (((void *)0)), (_U_UINT)51, UNITY_DISPLAY_STYLE_INT);

}
