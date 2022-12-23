#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct node
{
    int value;
    struct node *next;
} node;

typedef struct stack
{
    node *top;
    int size;
} stack;

void push(stack *s, int v)
{
    node *n = (node*)malloc(sizeof(node));
    n->value = v;
    n->next = s->top;
    s->top = n;
    s->size += 1;
}

int is_stack_empty(stack *s)
{
    if (s->size == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int pop(stack *s)
{
    int save = 0;
    save = s->top->value;
    s->top = s->top->next;
    s->size -= 1;
    return save;
}

int main()
{
    stack top = {NULL, 0};
    int op, v;
    while (true)
    {
        printf("Menu : ");
        scanf("%d", &op);
        if (op == 0)
        {
            scanf("%d", &v);
            push(&top, v);
        }
        else if (op == 1)
        {
            if (is_stack_empty(&top) == 1)
                printf("Stack is already empty!!!\n");
            else
                printf("%d\n", pop(&top));
        }
        else
        {
            printf("END CODE\n");
            break;
        }
    }
    while (top.top != NULL)
    {
        cout << top.top->value << endl;
        top.top = top.top->next;
    }
    return 0;
}