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
    int sum = 0;
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        helper(root, low, high);
        return sum;
    }
    TreeNode *helper(TreeNode *root, int low, int high)
    {
        if (root == NULL)
            return 0;
        if (root->val >= low && root->val <= high)
        {
            sum += root->val;
        }
        // helper(root->left, low, high);
        // helper(root->right, low, high);

        // Explore the left subtree only if it may contain values >= low.
        if (root->val > low)
        {
            helper(root->left, low, high);
        }

        // Explore the right subtree only if it may contain values <= high.
        if (root->val < high)
        {
            helper(root->right, low, high);
        }

        return root;
    }
};

int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);

    root->right->right = new TreeNode(18);

    int low = 7, high = 15;

    Solution obj;
    cout << "Range Sum: " << obj.rangeSumBST(root, low, high) << endl;

    return 0;
    return 0;
}

/*
                10
               /  \
              5    15
             / \     \
            3   7     18
*/