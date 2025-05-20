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
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> result;
        if (!root)
            return result;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int levelSize = q.size(); // captures how many nodes are at the current level of the tree.
            double levelSum = 0.0;

            for (int i = 0; i < levelSize; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                levelSum += node->val;
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            result.push_back(levelSum / levelSize);
        }
        return result;
    }
};

int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    vector<double> averages = sol.averageOfLevels(root);

    for (double avg : averages)
    {
        cout << fixed << setprecision(5) << avg << " ";
    }
    cout << endl;

    return 0;
}