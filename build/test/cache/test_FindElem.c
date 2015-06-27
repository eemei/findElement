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







  elem = listFind(list,&myValue1, intCompare);















  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((*(int *)(elem->data))), (((void *)0)), (_U_UINT)52, UNITY_DISPLAY_STYLE_INT);





}



void test_intCompare(){

  int value1=2;

  int value2=4;

  int value3=2;



  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((intCompare(&value1, &value2))), (((void *)0)), (_U_UINT)62, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((intCompare(&value1, &value3))), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_INT);

}



void test_strCompare(){

  char *str1 = "abc";

  char *str2 = "abc";

  char *str3 = "abd";





  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((strCompare (str1,str2))), (((void *)0)), (_U_UINT)72, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((strCompare (str1,str3))), (((void *)0)), (_U_UINT)73, UNITY_DISPLAY_STYLE_INT);

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

  UnityAssertEqualString((const char*)("four"), (const char*)((char *)(elem->data)), (((void *)0)), (_U_UINT)108);

}
