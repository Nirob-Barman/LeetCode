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
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return helper(nums, 0, nums.size() - 1);
    }
    TreeNode* helper(vector<int> &nums, int start, int end)
    {
        // Base case: no elements left in this range.
        if(start > end)
        {
            return NULL;
        }
        // Choose the middle element as the root to keep the BST balanced.
        int mid = (start + end) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        // Recursively build the left subtree from the left half.
        root->left = helper(nums, start, mid - 1);
        // Recursively build the right subtree from the right half.
        root->right = helper(nums, mid + 1, end);
        return root;
    }    
};

void inorder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main()
{
    vector<int> nums = {-10, -3, 0, 5, 9};

    Solution obj;
    TreeNode *root = obj.sortedArrayToBST(nums);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
    return 0;
}