// Code 6:
// Append()

#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct node
{
   int value;
   struct node *next;
} node;

node *NewNode(int v)
{
   node *n = (node *)malloc(sizeof(node));
   n->value = v;
   n->next = NULL;
   return n;
}

void Append(node *h, int v)
{
   node *n = NewNode(v);
   node *p = h;
   while (p->next != NULL)
   {
      p = p->next;
   }
   p->next = n;
}

void PrintList(node *h)
{
   node *p = h;
   while (p != NULL)
   {
      cout << p->value << endl;
      p = p->next;
   }
}

int main()
{
   node *head = NewNode(11);
   Append(head, 22);
   Append(head, 33);
   Append(head, 40);
   Append(head, 5);
   Append(head, 6);
   Append(head, 7);

   PrintList(head);
   return 0;
}