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
    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }

        return isMirror(root->left, root->right);
    }

    bool isMirror(TreeNode *left, TreeNode *right)
    {

        if (left == NULL && right == NULL)
            return true;

        if (left == NULL || right == NULL)
            return false;

        // return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
        if (left->val != right->val) // If the values of the current nodes are not equal, return false
            return false;

        return isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Solution s;
    cout << s.isSymmetric(root) << endl; // true
    return 0;
}