#include "FindElem.h"
#include "simpleList.h"
#include <stdio.h>


Element *listFind(List *list, void *data){
  Element *elem;
  elem = list->head;
   if(list->head == NULL){
    printf("nothing inside there\n");
    return NULL;
   }
   else{
     while(elem->data != data){
       if (elem->data = data){
         printf("data value:%d\n",*(int *)(data));
       }
     }
   }
   return elem;
}
