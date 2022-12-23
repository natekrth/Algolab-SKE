// Code 3: 
// Example how to use "." and "->" 

#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct node{
  string name;
  int   value;
} node;

int main() {
    node a;
    a.name = "Alice";
    a.value = 10;

    node *p = (node*)malloc(sizeof(node));
    (*p).name = "Bob";
    p->value = 20;
  
cout <<    a.name << " " <<    a.value << endl;
cout <<   p->name << " " <<   p->value << endl;
cout << (*p).name << " " << (*p).value << endl;
  
return 0;
}