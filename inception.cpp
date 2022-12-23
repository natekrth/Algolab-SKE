#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    string queries;
    string name;
    stack<string> dream;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> queries;
        if (queries == "Sleep")
        {
            cin >> name;
            dream.push(name);
        }
        else if ((queries == "Kick") && (!dream.empty()))
        {
            dream.pop();
        }
        else if (queries == "Test") {
            if (dream.empty())
            {
                cout << "Not in a dream" << endl;
            }
            else
            {
                cout << dream.top() << endl;
            }
        }
    }
}
