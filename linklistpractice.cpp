#include <iostream>

using namespace std;

typedef int ValueType;

struct Node {
    ValueType value;
    Node* next;

    Node(ValueType value, Node* next=NULL)
        : value(value), next(next) {}
};

void print_list(Node* node)
{
    while(node != NULL)
    {
        cout << node->value << endl;
        node = node->next;
    }
}

int main()
{
    Node* head = new Node(0);
    Node* tail = new Node(0);
    Node* new_tail = new Node (1);
    head->next = tail;
    tail->next = new_tail;
    tail = new_tail;
    print_list(head);
}