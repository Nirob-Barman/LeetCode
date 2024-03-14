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
    int goodNodes(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        return dfs(root, root->val);

        // int numofGoodNodes = 0;
        // queue<pair<TreeNode *, int>> q;
        // q.push({root, root->val});

        // while (!q.empty())
        // {
        //     TreeNode *curr = q.front().first;
        //     int currVal = q.front().second;
        //     q.pop();

        //     if (curr->val >= currVal)
        //         numofGoodNodes++;

        //     if (curr->left)
        //     {
        //         // q.push({curr->left, max(currVal, curr->left->val)});

        //         if (curr->left->val >= currVal)
        //             q.push({curr->left, curr->left->val});
        //         else
        //             q.push({curr->left, currVal});
        //     }
        //     if (curr->right)
        //     {
        //         // q.push({curr->right, max(currVal, curr->right->val)});
        //         if(curr->right->val >= currVal)
        //             q.push({curr->right, curr->right->val});
        //         else
        //             q.push({curr->right, currVal});
        //     }
        // }

        // return numofGoodNodes;
    }

    int dfs(TreeNode *root, int maxVal)
    {
        if (root == NULL)
            return 0;

        int numofGoodNodes = 0;

        if (root->val >= maxVal)
            numofGoodNodes++;

        maxVal = max(maxVal, root->val);

        numofGoodNodes += dfs(root->left, maxVal);
        numofGoodNodes += dfs(root->right, maxVal);

        return numofGoodNodes;
    }
};

int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->left = new TreeNode(3);
    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(5);

    cout << Solution().goodNodes(root) << endl;
    return 0;
}