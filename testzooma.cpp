#include <iostream>

using namespace std;

typedef struct ball
{
    int number;
    struct ball *next;
} ball;

ball *NewNode(int number)
{
    ball *q = (ball*)malloc(sizeof(ball));
    q->number = number;
    q->next = NULL;
    return q;
}

ball *add_front(ball *p, int number)
{
    ball *front = (ball*)malloc(sizeof(ball));
    front->number = number;
    front->next = p;
    p = front;
    return p;
}

ball *add_back(ball *h, int number)
{
    ball *n = NewNode(number);
    if (h == NULL)
    {
        h = n;
    }
    else
    {
        ball *current = h;
        while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = n;
    }
    return h;
}

ball *destroy(ball *p, int number)
{
    
}
ball *add_val(ball *p, int number, int insert)
{
    ball *back = NewNode(number);
    ball *current = p;
    if(insert == 1)
    {
        back->next = current->next;
        current->next = back;
    }
    else
    {
        while((current->number != insert) && (current != NULL))
        {
            current = current->next;
        }
        back->next = current->next;
        current->next = back;
    }
    return p;
}

void printList(ball *h)
{
    ball *p = h;
    while (p != NULL)
    {
        cout << p->number << endl;
        p = p->next;
    }
}

int main()
{
    int n;
    int num;
    int d;
    cin >> n;
    ball *head = NULL;
    // ball *save = NULL;
    for (int i = 1; i < n+1; i++)
    {
        cin >> d >> num;
        if (d == 0)
        {
            head = add_front(head, num);
        }
        else if (d == 1)
        {
            head = add_back(head, num);
        }
    }
    printList(head);
}