#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> v;
    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    int getMinimumDifference(TreeNode *root)
    {
        inorder(root);
        int mininumDif = INT_MAX;
        for (int i = 1; i < v.size(); i++)
        {
            mininumDif = min(mininumDif, v[i] - v[i - 1]);
        }
        return mininumDif;
    }
};

int main()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    Solution s;
    cout << s.getMinimumDifference(root) << endl;
    return 0;
}
/*
        4
       / \
      2   6
     / \
    1   3
*/