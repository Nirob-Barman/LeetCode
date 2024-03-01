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
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        postorder(root, ans);
        return ans;
    }

private:
    void postorder(TreeNode *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        postorder(root->left, ans);
        postorder(root->right, ans);
        ans.push_back(root->val);
    }
};

int main()
{
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> ans = s.postorderTraversal(root);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

    // 1
    //  \
    //   2
    //  /
    // 3
