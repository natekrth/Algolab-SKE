#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to count the number of inversions in a DNA string
int count_inversions(string string)
{
    int inversions = 0;
    for (int i = 0; i < string.length(); i++)
    {
        for (int j = i + 1; j < string.length(); j++)
        {
            if (string[i] > string[j])
            {
                inversions++;
            }
        }
    }
    return inversions;
}

int main()
{
    // Read the number of datasets
    int m;
    cin >> m;

    // Process each dataset
    for (int i = 0; i < m; i++)
    {
        // Read the length of the strings and the number of strings
        int n, m;
        cin >> n >> m;

        // Read the DNA strings
        string strings[m];
        for (int j = 0; j < m; j++)
        {
            cin >> strings[j];
        }

        // Sort the DNA strings by their number of inversions in ascending order
        sort(strings, strings + m, [](string s1, string s2)
             { return count_inversions(s1) < count_inversions(s2); });

        // Print the sorted DNA strings
        for (int j = 0; j < m; j++)
        {
            cout << strings[j] << endl;
        }

        // Print a blank line between consecutive test cases
        if (i < m - 1)
        {
            cout << endl;
        }
    }

    return 0;
}
