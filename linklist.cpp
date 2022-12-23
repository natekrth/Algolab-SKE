#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct node
{
    int value;
    struct node *next;
} node;

void print_linklist(node *p)
{
    int i = 0;
    while (p != NULL)
    {
        printf("(%d)-%d ", i, p->value);
        p = p->next;
        i++;
    }
    printf("\n");
}

node *add_front(node *p)
{
    int n;
    cin >> n;
    node *front = (node*)malloc(sizeof(node));
    front->value = n;
    front->next = p;
    p = front;
    return p;
}

node *add_back(node *p)
{
    int n;
    cin >> n;
    node *back = (node*)malloc(sizeof(node));
    back->value = n;
    back->next = NULL;
    if (p == NULL)
    {
        p = back;
    }
    else
    {
        node *current = p;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = back;
    }
    
    return p;
}

int len_linklist(node *p)
{
    int count=0;
    node *current = p;
    while (current != NULL) {
        current = current->next;
        count++;
    }
    return count;
}

node *delete_index(node *p)
{
    int index;
    int count = 0;
    cin >> index;
    node *current = p;
    while ((count < index-1) && (current != NULL)) {
        current = current->next;
        count++;
    }
    node *next = current->next->next;
    current->next = next;
    return p;
}

node *delete_value(node *p)
{
    int n;
    int count = 0;
    cin >> n;
    node *current = p;
    node *save_head = NULL;
    node *saved = save_head;
    while((current->value!=n) && (current!=NULL))
    {
        if(save_head!=NULL)
        {
            node *new_node = (node*)malloc(sizeof(node));
            new_node->value = current->value;
            new_node->next = NULL;    
            while ((saved->next!=NULL) && (saved->next->value == n)) 
            {
                saved = saved->next;
            }
            saved->next = new_node;
        }
        else
        {
            //create new node and save head.
            node *new_node = (node*)malloc(sizeof(node));
            new_node->value = current->value;
            new_node->next = NULL;
            saved = save_head;
            save_head = new_node;
        }
        current = current->next;
    }
    return save_head;
}

int main()
{
    node *head = NULL;
    int op;
    while (true)
    {
        printf("Menu : ");
        scanf("%d", &op);
        if (op == 0)
            print_linklist(head);
        else if (op == 1)
            head = add_front(head);
        else if (op == 2)
            head = add_back(head);
        else if (op == 3)
            printf("len = %d\n", len_linklist(head));
        else if (op == 4)
            head = delete_index(head);
        else if (op == 5)
            head = delete_value(head);
        else
        {
            printf("END CODE\n");
            break;
        }
    }
    return 0;
}