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
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        // return max(maxDepth(root->left), maxDepth(root->right)) + 1; // Here, 1 is for root node

        queue<TreeNode *> q;
        q.push(root);
        int depth = 0;

        while (!q.empty())
        {
            int currentNodesSize = q.size();

            for (int i = 0; i < currentNodesSize; i++)
            {
                TreeNode *currentNode = q.front();
                q.pop();

                if (currentNode->left != NULL)
                {
                    q.push(currentNode->left);
                }

                if (currentNode->right != NULL)
                {
                    q.push(currentNode->right);
                }
            }

            depth++;
        }

        return depth;
    }
};

int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    // cout << Solution().maxDepth(root) << endl;
    Solution s;
    cout << s.maxDepth(root) << endl; // 2
    return 0;
}

//     3
//    / \
//   9   20
//      /  \
//     15   7