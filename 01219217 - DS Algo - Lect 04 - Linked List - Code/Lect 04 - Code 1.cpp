// Code 1: 
// Type declaration and rename (typedef).

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

    node b;
    b.name = "Bob";
    b.value = 20;
  
    cout << a.name << " " << a.value  << endl;
    cout << b.name << " " << b.value  << endl;
    return 0;
}