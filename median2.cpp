#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    int number;
    while (cin >> number)
    {
        numbers.push_back(number);
        sort(numbers.begin(), numbers.end());

        int n = numbers.size();
        if (n % 2 == 1)
        {
            cout << numbers[n / 2] << endl;
        }
        else
        {
            cout << (numbers[n / 2 - 1] + numbers[n / 2]) / 2 << endl;
        }
    }

    return 0;
}
