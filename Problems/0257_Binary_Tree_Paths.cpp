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
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> ans;
        if (root == NULL)
        {
            return ans;
        }

        string currentPath = "";
        // currentPath += to_string(root->val);
        // string currentPath = to_string(root->val);

        dfs(root, currentPath, ans);

        return ans;
    }

private:
    void dfs(TreeNode *root, string currentPathString, vector<string> &ans)
    {
        if (root == NULL)
        {
            return;
        }

        // currentPathString += "->";
        // currentPathString += to_string(root->val);
        if (currentPathString == "")
            currentPathString += to_string(root->val);
        else
            currentPathString += "->" + to_string(root->val);

        // if it is a leaf node, then add the path to the answer
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(currentPathString);
            return;
        }
        if (root->left != NULL)
            dfs(root->left, currentPathString, ans);
        if (root->right != NULL)
            dfs(root->right, currentPathString, ans);
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    Solution s;
    vector<string> ans = s.binaryTreePaths(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    cout << endl;
    return 0;
}