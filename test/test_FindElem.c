#include "unity.h"
#include "FindElem.h"
#include "simpleList.h"
#include <malloc.h>
#include <stdio.h>

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

  //TEST_ASSERT_EQUAL (list->head->data, &value3);
  //TEST_ASSERT_EQUAL (list->head->next->data, &value7);
  // TEST_ASSERT_EQUAL (list->head->next->next, &value1);

  // TEST_ASSERT_NOT_NULL(elem);
  // TEST_ASSERT_NOT_NULL(elem->data);
   TEST_ASSERT_EQUAL(1, *(int *)(elem->data));
   TEST_ASSERT_EQUAL (list->head->data, &value1);
}