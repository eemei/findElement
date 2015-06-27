#include "simpleList.h"
#include <malloc.h>
#include <stdio.h>


List *listCreate(){
  List *list = malloc (sizeof(List));
  list->head = NULL;
  list->length = 0;
}

Element *elementCreate(void *data){
  Element *elem= malloc(sizeof(Element));
  elem->next = NULL;
  elem->data = data;
  return elem;
}

Element *elementDestory(Element *elem){
  free(elem);
}