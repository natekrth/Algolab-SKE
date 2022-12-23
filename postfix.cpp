#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef double ValueType;
struct ListNode
{
    ValueType val;
    ListNode *next;
    ListNode(ValueType v, ListNode *nxt = 0)
        : val(v), next(nxt) {}
};

class Stack
{
private:
    ListNode *top_node;

public:
    Stack()
        : top_node(0) {}
    ~Stack();

    void push(ValueType v);
    ValueType pop();
    ValueType top() { return top_node->val; }
    bool is_empty() { return top_node == 0; }
};

void Stack::push(ValueType v)
{
    ListNode *new_node = new ListNode(v, top_node);
    top_node = new_node;
}

ValueType Stack::pop()
{
    if (top_node != 0)
    {
        ValueType top_val = top_node->val;
        ListNode *tmp = top_node;
        top_node = top_node -> next;
        delete tmp;
        return top_val;
    }
    return 0;
}

Stack::~Stack()
{
    while (top_node != 0)
    {
        ListNode *tmp = top_node;
        top_node = top_node->next;
        delete tmp;
    }
}

int main()
{
    string buffer;
    double ans;
    Stack operands;

    do
    {
        cin >> buffer;
        if (buffer.at(0) == '=')
        {
            break;
        }
        else if ((buffer.at(0) >= '0') && (buffer.at(0) <= '9'))
        {
            double val = stod(buffer);
            // insert val into the top of the stack
            operands.push(val);

        }
        else
        {
            double num1;
            double num2;
            num1 = operands.pop();
            num2 = operands.pop();
            if(buffer == "+")
            {
                ans = num2 + num1;
            } 
            if(buffer == "-")
            {
                ans = num2 - num1;
            } 
            if(buffer == "*")
            {
                ans = num2 * num1;
            } 
            if(buffer == "/")
            {
                ans = num2 / num1;
            }
            operands.push(ans);

            // your code here
        }
    } while (true);
    cout << fixed << setprecision(4) << operands.top() << endl;
}