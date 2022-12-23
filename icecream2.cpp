#include <iostream>
using namespace std;

typedef int ValueType;
struct ListNode
{
    ValueType val;
    ValueType flavor;
    ListNode *next;

    ListNode(ValueType v, ValueType flv, ListNode *nxt = 0)
        : val(v), flavor(flv), next(nxt) {}
};

ListNode *front = nullptr;
ListNode *rear = nullptr;

void append(ListNode *&front, ListNode *&rear, ValueType x, ValueType f)
{
    ListNode *n = new ListNode(x, f);
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

ValueType extract(ListNode *&front, ListNode *&rear, int *one, int *two)
{
    ValueType v = front->val;
    ValueType f = front->flavor;
    *one = front->val;
    *two = front->flavor;

    ListNode *new_front = front->next;
    delete front;
    front = new_front;
    if (front == nullptr)
    {
        rear = nullptr;
    }
    return v;
}

int flavor_ex(ListNode *&front)
{
    int a = 0;
    ListNode *head = front;
    while(head != nullptr)
    {
        a = head->flavor;
        head = head->next;
    }
    return a;
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
    int flavor_list[20] = {0};
    int  q, r;
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int t;

        cin >> t;
        if (t == 1)
        {
            int n;
            cin >> n;
            int id;
            int flav;
            for (int j = 0; j < n; j++)
            {
                cin >> id >> flav;
                append(front, rear, id, flav);
            }
        }
        else
        {
            cout << extract(front, rear, &q, &r) << endl;
            flavor_list[r-1] += 1;
        }
    }
    cout << count(front) << endl;
    for (int p=0; p < 20; p++)
    {
        cout << flavor_list[p];
        cout << " ";
    }
}