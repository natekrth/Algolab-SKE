#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int n;
    int k;
    int save = 0;
    int table_index = 0;
    stack<int> result;
    vector<int> person;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        person.push_back(i);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << person[i] << endl;
    // }
    while (!person.empty())
    {
        table_index = (save + k) - 1;
        save = table_index % person.size();
        result.push(person[save]);
        person.erase(person.begin()+save);
    }
    cout << result.top()+1 << endl;
}