// Code 5: 
// NewNode() 

#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct node{
  int         value;
  struct node *next;
} node;

node* NewNode(int v)
{   node *n = (node*)malloc(sizeof(node));
    n->value = v;
    n->next  = NULL;
    return n;
}

int main() {
    node *p = NewNode(11);
    node *q = NewNode(22);
    node *r = NewNode(44);

    p->next = q;
    q->next = r;

	cout <<   p->value << endl;
	cout <<   p->next->value << endl;
	cout <<   p->next->next->value << endl;  
return 0;
}