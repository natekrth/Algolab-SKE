#include <iostream>
using namespace std;

typedef int ValueType;
struct ListNode
{
    ValueType val;
    ListNode *next;

    ListNode(ValueType v, ListNode *nxt = 0)
        : val(v), next(nxt) {}
};

ListNode *front = nullptr;
ListNode *rear = nullptr;

void append(ListNode *&front, ListNode *&rear, ValueType x)
{
    ListNode *n = new ListNode(x);
    if (rear != nullptr)
    {
        rear->next = n;
        rear = n;
    }
    else
    {
        front = rear = n;
    }
}

ValueType extract(ListNode *&front, ListNode *&rear)
{
    ValueType v = front->val;

    ListNode *new_front = front->next;
    delete front;
    front = new_front;
    if (front == nullptr)
    {
        rear = nullptr;
    }
    return v;
}

int count(ListNode *&front)
{
    int c = 0;
    ListNode *head = front;
    while (head != nullptr)
    {
        c += 1;
        head = head->next;
    }
    return c;
}

int main()
{
    int m;
    int flavor[20] = {0};
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int t;

        cin >> t;
        if (t == 1)
        {
            int n;
            int fla;
            cin >> n;
            int id;
            for (int j = 0; j < n; j++)
            {
                cin >> id >> fla;
                append(front, rear, id);
            }
        }
        else
        {
            cout << extract(front, rear) << endl;
            flavor[fla] += 1;
        }
    }
    cout << count(front) << endl;
    for (int z=0; z<20; z++)
    {
        cout << flavor[z];
    }
}
