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
    bool isBalanced(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }

        // if (Height(root) == -1)
        //     return false;

        // return true;

        int left = Height(root->left);
        int right = Height(root->right);

        if (abs(left - right) > 1)
        {
            return false;
        }
        else
        {
            return isBalanced(root->left) && isBalanced(root->right);
        }
    }

    int Height(TreeNode *root){
        if (root == NULL)
        {
            return 0;
        }

        return max(Height(root->left), Height(root->right)) + 1;
    }

    // int Height(TreeNode *root)
    // {
    //     if (root == NULL)
    //     {
    //         return 0;
    //     }

    //     int left = Height(root->left);
    //     int right = Height(root->right);

    //     if (left == -1 || right == -1 || abs(left - right) > 1)
    //     {
    //         return -1;
    //     }
    //     else
    //     {
    //         return max(left, right) + 1;
    //     }
    // }
};

int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution s;
    cout << s.isBalanced(root) << endl; // true

    TreeNode *root2 = new TreeNode(1);
    root2->right = new TreeNode(2);
    root2->right->right = new TreeNode(3);
    cout << s.isBalanced(root2) << endl; // false
    return 0;
}