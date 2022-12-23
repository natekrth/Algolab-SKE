#include <iosteam>

using namespace std;

typedef int ValueType;

struct Node 
{
    ValueType value;
    Node* next;

    Node(ValueType value, Node* next)
        :value(value), next(next) {}
};

int main()
{
    int n;
    cin >> n;
    for (int i=0; i < n; i++)
    {
        Node* node = new Node(i);
        node->next = node->next->next;
    }
    Node* p = 
    while()
}