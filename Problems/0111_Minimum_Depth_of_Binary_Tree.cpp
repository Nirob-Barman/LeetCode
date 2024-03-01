#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        // If it is a leaf node, return 1
        if (root->left == NULL && root->right == NULL)
            return 1;

        int leftDepth = INT_MAX;
        int rightDepth = INT_MAX;

        if (root->left != NULL)
            leftDepth = minDepth(root->left);

        if (root->right != NULL)
            rightDepth = minDepth(root->right);

        return min(leftDepth, rightDepth) + 1;
    }
};

int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    Solution s;
    cout << s.minDepth(root) << endl; // 2
    return 0;
}

//     3
//    / \
//   9   20
//      /  \
//     15   7
