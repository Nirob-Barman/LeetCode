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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;

        queue<TreeNode *> q;

        if (root)
        {
            q.push(root);

            while (!q.empty())
            {
                int size = q.size(); // Get the number of nodes at the current level
                vector<int> level;

                for (int i = 0; i < size; i++)
                {
                    TreeNode *curr = q.front();
                    // cout << size << " Node: " << i + 1 << " " << curr->val << endl;
                    q.pop();

                    level.push_back(curr->val);
                    if (curr->left)
                    {
                        // cout << "Left: " << curr->left->val << endl;
                        q.push(curr->left);
                    }
                    if (curr->right)
                    {
                        // cout << "Right: " << curr->right->val << endl;
                        q.push(curr->right);
                    }
                }
                ans.push_back(level);
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    vector<vector<int>> ans = s.levelOrder(root);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//     1
//    / \
//   2   3
//  / \   \
// 4   5   6

// At the first level, there is only one node (root: 1). The size of the queue is 1, and the level vector contains the value [1].
// At the second level, there are two nodes (2 and 3). The size of the queue is 2, and the level vector contains the values [2, 3].
// At the third level, there are four nodes (4, 5, 6, 7). The size of the queue is 4, and the level vector contains the values [4, 5, 6, 7].

// First Iteration (Level 1):
// The queue initially contains only the root node (1).
// size is set to the current size of the queue, which is 1.
// The for loop runs once (i = 0), and the current node (1) is dequeued.
// The value of the current node (1) is added to the level vector.
// Both child nodes of the current node (2 and 3) are enqueued.
// The for loop ends, and the level vector (containing [1]) is added to the ans vector.

// Second Iteration (Level 2):
// The queue now contains nodes 2 and 3.
// size is set to the current size of the queue, which is 2.
// The for loop runs twice (i = 0, 1).
// For i = 0, node 2 is dequeued, and its value is added to the level vector.
// Both child nodes of node 2 (4 and 5) are enqueued.
// For i = 1, node 3 is dequeued, and its value is added to the level vector.
// The right child of node 3 (6) is enqueued.
// The for loop ends, and the level vector (containing [2, 3]) is added to the ans vector.

// Third Iteration (Level 3):
// The queue now contains nodes 4, 5, and 6.
// size is set to the current size of the queue, which is 3.
// The for loop runs three times (i = 0, 1, 2).
// Nodes 4, 5, and 6 are dequeued, and their values are added to the level vector.
// No child nodes are enqueued since nodes 4 and 5 are leaf nodes, and node 6 has no left child.
// The for loop ends, and the level vector (containing [4, 5, 6]) is added to the ans vector.