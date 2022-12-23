#include <iostream>

using namespace std;

typedef struct ball
{
    int color;
    int position;
    struct ball *next;
} ball;

ball *NewNode(int color, int position)
{
    ball *q = (ball*)malloc(sizeof(ball));
    q->color = color;
    q->position = position;
    q->next = NULL;
    return q;
}

ball *append(ball *h, int color, int position)
{
    ball *n = NewNode(color, position);
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

ball *add_val(ball *p, int color ,int position, int insert)
{
    ball *back = NewNode(color, position);
    ball *current = p;
    while((current->next->position != insert) && (current != NULL))
    {
        current = current->next;
    }
    current->next = back;
    back->next = current->next->next;
    return p;
}

void PrintList(ball *h)
{
    ball *p = h;
    while (p != NULL)
    {
        cout << p->position << endl;
        p = p->next;
    }
}

int main()
{
    int n, m;
    int c;
    cin >> n >> m;
    ball *head = NULL;
    // ball *first = NewNode(0, 0);
    for (int i = 1; i < n; i++)
    {
        cin >> c;
        head = append(head, c, i);
    }
    int sum = n+m;
    int insert;
    for (int j = n+1; j < sum+1; j++)
    {
        cin >> c >> insert;
        // head = append(head, c, j);
        save = add_val(save, c, j, insert);
        // PrintList(save);
    }
}