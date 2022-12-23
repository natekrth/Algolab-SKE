// Code 2: 
// The differences between a struct variable 
// and a pointer to struct.

#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct node{
  string name;
  int value;
} node;

int main() {
    node a;
    a.name = "Alice";
    a.value = 10;
  
    node *b = (node*)malloc(sizeof(node));
    (*b).name  = "Bob";
    (*b).value = 20;
  
    cout << a.name    << " " << a.value    << endl;
    cout << (*b).name << " " << (*b).value << endl;
    return 0;
}