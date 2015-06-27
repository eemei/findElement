#include "FindElem.h"
#include "simpleList.h"
#include <stdio.h>
#include <string.h>


// Element *listFind(List *list, void *data){
  // Element *elem;
  // elem = list->head;
   // if(list->head == NULL){
    // printf("nothing inside there\n");
    // return NULL;
   // }
   // else{
     // while(elem->data != data){
       // if (elem->data = data){
         // printf("data value:%d\n",*(int *)(data));
       // }
     // }
   // }
   // return elem;
// }

Element *listFind(List *list, void *data, int (*compare)(void *first, void *second)){
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

int intCompare (void *first, void *second){
  if ((*(int *)(first)) == (*(int *)(second))){
    return 0;
  }
  else 
    return -1;
}

int strCompare (void *first, void *second){
  
  printf("str first: %s\n", (char *)(first));
  printf("str second: %s\n", (char *)(second));
  
return strcmp ((char *)(first),(char *)(second));
}