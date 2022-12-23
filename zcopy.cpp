#include <iostream>

using namespace std;

typedef int ValueType;

struct balls {
    ValueType position;
    ValueType color;
    balls* next;

    balls(ValueType position, ValueType color, balls* next= nullptr)
            : position(position), color(color), next(next) {}
};

balls *NewNode(int color, int position)
{
    balls *q = (balls*)malloc(sizeof(balls));
    q->color = color;
    q->position = position;
    q->next = NULL;
    return q;
}

void insert_ball(balls *head, balls *insert, int ball_before)
{
    balls *temp = head;

    while (temp->position != ball_before)
    {
        temp = temp->next;
        if (temp->position == ball_before)
        {
            balls *next_temp = temp->next;
            temp->next = insert;
            insert->next = next_temp;
        }
    }
}

void print_list(balls *node)
{
    while (node != nullptr)
    {
        cout << node->position << endl;
        node = node->next;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int color, ball = 1, ball_before;

    balls *header = NewNode(0, 0);
    balls *temp = NewNode(0, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> color;

        if (i == 0)
        {
            temp->color = color;
            temp->position = ball;
            header->next = temp;
        }
        else
        {
            balls *new_temp = NewNode(color, ball);
            temp->next = new_temp;
            temp = new_temp;
        }
        ++ball;
    }
    for (int j = 0; j < m; ++j)
    {
        cin >> color >> ball_before;

        balls *new_temp = NewNode(color, ball);
        insert_ball(header, new_temp, ball_before);
        ++ball;
    }

    print_list(header->next);
}