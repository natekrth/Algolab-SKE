#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    stack<int> stack;
    for (int i = 0; i < n; i++)
    {
        int rocks;
        int save;
        int save2;
        int save3;
        cin >> rocks;
        save = rocks;
        save2 = rocks;
        if (k == 2)
        {
            if (stack.size() == 0)
            {
                stack.push(rocks);
                continue;
            }
            if (stack.top() == save)
            {
                stack.pop();
            }
            else
            {
                stack.push(rocks);
            }
        }
        if (k == 3)
        {
            // cout << "stack size " << stack.size()+1 << endl;
            if (stack.size() < 2)
            {
                stack.push(rocks);
                continue;
            }
            int top = stack.top();
            // cout << "just in " << save2 << endl;
            // cout << "top: " << top << endl;
            stack.pop();
            int second = stack.top();
            // cout << "second: " << second << endl;
            stack.push(top);
            if((top == second) && (top == save2) && (save2 == second))
            {
                stack.pop();
                stack.pop();
                // cout << "pop" << endl;
                // cout << "stack size " << stack.size() << endl;
            }
            else
            {
                stack.push(rocks);
            }
        }
    }
    cout << stack.size() << endl;
}