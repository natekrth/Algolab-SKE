// Code 7: 
// Insert()

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

void Append(node* h, int v)
{  node *n = NewNode(v);
   node *p = h;
   while(p->next != NULL)
   {  p = p->next;
   }
   p->next = n;
}

void PrintList(node* h)
{  node *p = h;
   while(p!=NULL)
   {  cout << p->value << " -> ";
      p = p->next;
   }
   cout << endl;
}

void Insert(node *h, int v)
{  node *n = NewNode(v);
   node *p = h;
   while( p->next->value < v )
   {  p = p->next;
   }  
   n->next = p->next;
   p->next = n;
}

int main() {
    node *head = NewNode(10); 
    Append(head, 20);
    Append(head, 30);
    Append(head, 40);  PrintList(head);
	
    Insert(head, 33);  PrintList(head);
    Insert(head, 25);  PrintList(head);
    Insert(head, 16);  PrintList(head);
    return 0;
}