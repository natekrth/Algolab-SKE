#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

typedef int valueType;

struct TreeNode
{
    valueType val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(valueType val, TreeNode *left = 0, TreeNode *right = 0)
        : val(val), left(left), right(right) {}
};


void insert(TreeNode *&r, valueType x)
{
    if (!r)
    {
        r = new TreeNode(x);
    }
    else if (x < r->val)
    {
        insert(r->left, x);
    }
    else if (x > r->val)
    {
        insert(r->right, x);
    }
}

int find(TreeNode *r, valueType x)
{
    TreeNode *g = r;
    int count = 0;
    while (g != NULL)
    {
        if (g->val == x)
        {
            return count;
        }
        else if (g->val < x)
        {
            g = g->right;
            count++;
        }
        else if (g->val > x)
        {
            g = g->left;
            count++;
        }
    }
    return count;
}

int main()
{
    TreeNode *root = 0;

    int n;
    cin >> n;
    vector<int> layer;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        layer.push_back(x);
        insert(root, x);
    }
    sort(layer.rbegin(), layer.rend());
    for (int i= 0; i < n; i++){
        int c = find(root, layer[i]);
        for (int j = 0; j <c; j++){
            cout << "...";
        }
        cout << "* "<< layer[i] << endl;
    }

}