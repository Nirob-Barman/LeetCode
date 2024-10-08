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
    int sumOfLeftLeaves(TreeNode *root)
    {
        // if (root == NULL)
        // {
        //     return 0;
        // }
        // queue<TreeNode *> q;
        // int leftSum = 0;
        // q.push(root);
        // while (!q.empty())
        // {
        //     TreeNode *currentNode = q.front();
        //     q.pop();

        //     if (currentNode->left)
        //     {
        //         if (currentNode->left->left == NULL && currentNode->left->right == NULL)
        //         {
        //             leftSum += currentNode->left->val;
        //         }
        //         q.push(currentNode->left);
        //     }
        //     if (currentNode->right)
        //     {
        //         q.push(currentNode->right);
        //     }
        // }
        // return leftSum;

        return dfs(root, false);
    }

    int dfs(TreeNode *root, bool isLeft)
    {
        if (root == NULL)
        {
            return 0;
        }

        if (isLeft && root->left == NULL && root->right == NULL)
        {
            return root->val;
        }

        return dfs(root->left, true) + dfs(root->right, false);
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
    cout << s.sumOfLeftLeaves(root) << endl; // 24
    return 0;
}