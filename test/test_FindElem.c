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
  int myValue1 = 1;

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


  ////elem = listFind(list,&value1);
  elem = listFind(list,&myValue1, intCompare);

  //TEST_ASSERT_EQUAL (list->head->data, &value3);
  //TEST_ASSERT_EQUAL (list->head->next->data, &value7);
  // TEST_ASSERT_EQUAL (list->head->next->next, &value1);

  // TEST_ASSERT_NOT_NULL(elem);
  // TEST_ASSERT_NOT_NULL(elem->data);
  TEST_ASSERT_EQUAL(1, *(int *)(elem->data));
  ////TEST_ASSERT_EQUAL (list->head->data, &value1);
 
}

void test_intCompare(){
  int value1=2;
  int value2=4;
  int value3=2;
  //intCompare(&value1, &value2);
  TEST_ASSERT_EQUAL (-1,intCompare(&value1, &value2));
  TEST_ASSERT_EQUAL (0,intCompare(&value1, &value3));
}

void test_strCompare(){
  char *str1 = "abc";
  char *str2 = "abc";
  char *str3 = "abd";

  //strCompare (str1,str2);
  TEST_ASSERT_EQUAL(0,strCompare (str1,str2));
  TEST_ASSERT_EQUAL(-1,strCompare (str1,str3));
}

void test_findElement_given_string(){
  char *str1 = "one";
  char *str3 = "two";
  char *str4 = "four";
  char *str6 = "six";
  char *str7 = "seven";
  char *myStr4 = "four";
  
  List *list = listCreate();
  Element *elem,*elemNext;

  elemNext = elementCreate(str6);
  elem = elementCreate(str4);
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
  elemNext = elem;

  list->head = elem;
  
  elem =listFind (list, myStr4, strCompare);
  TEST_ASSERT_EQUAL_STRING("four", (char *)(elem->data));
}
