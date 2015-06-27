#ifndef FindElem_H
#define FindElem_H
#include "simpleList.h"
//Element *listFind(List *list, void *data);
Element *listFind(List *list, void *data, int (*compare)(void *first, void *second));
int intCompare (void *first, void *second);
int strCompare (void *first, void *second);

#endif // FindElem_H
