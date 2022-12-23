#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct node
{
    int value;
    struct node *next;
} node;

typedef struct queue
{
    node *front;
    node *rear;
    int size;
} queue;

void enqueue(queue *q, int v)
{
    node *n = (node*)malloc(sizeof(node));
    if (q->front == NULL)
    {
        q->front = n;
    }
    else {
        q->rear->next = n;
    }
    n->value = v;
    n->next = NULL;
    q->rear = n;
    q->size += 1;
}

int is_queue_empty(queue *q)
{
    if (q->size == 0) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int dequeue(queue *q)
{
    int save = 0;
    save = q->front->value;
    q->front = q->front->next;
    q->size -= 1;
    return save;
}

int main()
{
    queue Q = {NULL, NULL, 0};
    int op, v;
    while (true)
    {
        printf("Menu : ");
        scanf("%d", &op);
        if (op == 0)
        {
            scanf("%d", &v);
            enqueue(&Q, v);
        }
        else if (op == 1)
        {
            if (is_queue_empty(&Q) == 1)
                printf("Queue is already empty!!!\n");
            else
                printf("%d\n", dequeue(&Q));
        }
        else
        {
            printf("END CODE\n");
            break;
        }
    }
    // while (Q.rear != NULL)
    // {
    //     cout << Q.front->value << endl;
    //     Q.front = Q.front->next;
    // }
    return 0;
}