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
    vector<int> v;
    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    // method to transform vector to tree
    TreeNode *IncreasingOrderSearchTree()
    {
        TreeNode *root = new TreeNode(v[0]);
        TreeNode *temp = root;
        for (int i = 1; i < v.size(); i++)
        {
            // creating and connecting nodes
            temp->right = new TreeNode(v[i]);
            temp = temp->right;
        }
        return root;
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        inorder(root);
        return IncreasingOrderSearchTree();
    }
};

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(8);
    root->left->left->left = new TreeNode(1);
    root->right->right->left = new TreeNode(7);
    root->right->right->right = new TreeNode(9);

    Solution s;
    TreeNode *ans = s.increasingBST(root);
    while (ans != NULL)
    {
        cout << ans->val << " ";
        ans = ans->right;
    }
    return 0;
}
/*
          5
        /   \
       3     6
      / \     \
     2   4     8
    /         / \
   1         7   9
*/