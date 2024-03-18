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
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == NULL)
            return NULL;
        TreeNode *l = invertTree(root->left);  // left subtree
        TreeNode *r = invertTree(root->right); // right subtree
        // swap left and right subtrees
        root->left = r;
        root->right = l;
        return root;
    }

    void printLevelOrder(TreeNode *root)
    {
        if (root == NULL)
            return;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int levelSize = q.size();

            for (int i = 0; i < levelSize; ++i)
            {
                TreeNode *node = q.front();
                q.pop();
                cout << node->val << " ";

                if (node->left != NULL)
                    q.push(node->left);
                if (node->right != NULL)
                    q.push(node->right);
            }
        }
    }
};

int main()
{
    Solution s;
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);
    TreeNode *ans = s.invertTree(root);
    s.printLevelOrder(ans);
    return 0;
}