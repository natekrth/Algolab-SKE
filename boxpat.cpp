#include <iostream>
using namespace std;

int main()
{
    int height[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    int max_height = height[0];
    int max_count = 0;
    
    for (int j = 0; j < n; j++) {
        if (height[j] >= max_height) {
            max_height = height[j];
        }
    }
    for (int k = 0; k < n; k++) {
        if (height[k] == max_height) {
            max_count++;
        }
    }
    cout << max_count << endl;
}