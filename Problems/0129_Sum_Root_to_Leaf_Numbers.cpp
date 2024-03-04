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
    int sumNumbers(TreeNode *root)
    {
        // return dfs(root, 0);

        if (root == NULL)
        {
            return 0;
        }

        int totalSum = 0;

        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            TreeNode *curr = q.front().first;
            int currentSum = q.front().second;

            q.pop();

            currentSum = currentSum * 10 + curr->val;

            if (curr->left == NULL && curr->right == NULL)
            {
                totalSum += currentSum;
            }

            if (curr->left != NULL)
            {
                q.push({curr->left, currentSum});
            }
            if (curr->right != NULL)
            {
                q.push({curr->right, currentSum});
            }
        }

        return totalSum;
    }

    int dfs(TreeNode *root, int sum)
    {
        if (root == NULL)
        {
            return 0;
        }

        sum = sum * 10 + root->val;

        if (root->left == NULL && root->right == NULL)
        {
            return sum;
        }

        return dfs(root->left, sum) + dfs(root->right, sum);
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    Solution s;
    cout << s.sumNumbers(root) << endl;
    return 0;
}