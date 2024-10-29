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
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (root == NULL)
            return false;

        queue<pair<TreeNode *, int>> q;
        q.push({root, root->val});

        while (!q.empty())
        {
            TreeNode *curr = q.front().first;
            int currentSum = q.front().second;
            q.pop();

            if (curr->left == NULL && curr->right == NULL && currentSum == targetSum)
                return true;

            if (curr->left != NULL)
            {
                q.push({curr->left, currentSum + curr->left->val});
            }
            if (curr->right != NULL)
            {
                q.push({curr->right, currentSum + curr->right->val});
            }
        }

        return false;
    }
};

int main()
{
    Solution s;
    cout << s.hasPathSum(NULL, 0) << endl; // false

    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);
    cout << s.hasPathSum(root, 22) << endl; // true

    root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    cout << s.hasPathSum(root, 5) << endl; // false
    return 0;
}