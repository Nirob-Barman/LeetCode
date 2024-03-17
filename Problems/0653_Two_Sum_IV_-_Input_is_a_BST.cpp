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
    bool findTarget(TreeNode *root, int k)
    {
        vector<int> v;
        inorder(root, v);

        int left = 0;
        int right = v.size() - 1;

        while (left < right)
        {
            if (v[left] + v[right] == k)
                return true;
            else if (v[left] + v[right] < k)
                left++;
            else
                right--;
        }

        return false;
    }

    void inorder(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
};

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right->right = new TreeNode(7);

    Solution s;
    cout << s.findTarget(root, 9) << endl;  // true
    cout << s.findTarget(root, 28) << endl; // false
    return 0;
}