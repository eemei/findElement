#ifndef simpleList_H
#define simpleList_H




typedef struct Element_t Element;
struct Element_t{
  Element *next;
  void *data; //let pointer point to anything but u don't know the type
};

typedef struct{
  Element *head;
  int length;
}List;

List *listCreate();
Element *elementCreate(void *data);
Element *elementDestory(Element *elem);

#endif // simpleList_H
