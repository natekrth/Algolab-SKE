// Code 4: 
// First Linked List

#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct node{
  int         value;
  struct node *next;
} node;

int main() {
    node a;
    a.value = 10;
    a.next = NULL;
  
    node *p = (node*)malloc(sizeof(node));
    p->value = 20;
    p->next  = NULL;
  
cout <<    a.value << endl;
cout <<   p->value << endl;
return 0;
}