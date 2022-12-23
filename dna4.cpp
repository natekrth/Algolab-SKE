#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode
{
    string dna_str;
    int num;
};

bool comp(ListNode one, ListNode two)
{
    return (one.num < two.num);
}

int find_inversion(int n, ListNode dna)
{
    int count = 0;
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (dna.dna_str[j] > dna.dna_str[k])
            {
                count++;
                // cout << j << " " << k << endl;
            }
        }
    }
    return count;
}

int main()
{
    int a = 1;
    int n;
    int m;
    cin >> a;

    for (int z = 0; z < a; z++)
    {
        cin >> n >> m;
        ListNode dna[m];
        vector<ListNode> result;
        for (int i = 0; i < m; i++)
        {
            int count_invertion = 0;
            cin >> dna[i].dna_str;
            count_invertion = find_inversion(n, dna[i]);
            // cout << counts << endl;
            dna[i].num = count_invertion;
            int add_index = 0;
            for (int j = 0; j < result.size(); j++)
            {
                if (count_invertion < result[j].num)
                {
                    break;
                }
                add_index += 1;
            }
            result.insert(result.begin() + add_index, dna[i]);
        }
        for (int t = 0; t < result.size(); t++)
        {
            cout << result[t].dna_str << endl;
        }
        if (z + 1 != a)
        {
            cout << endl;
        }
    }
}