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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        // if (p == NULL && q == NULL)
        // {
        //     // Both trees are empty, so they are same
        //     return true;
        // }

        // if (p == NULL || q == NULL)
        // {
        //     // One of the trees is empty, so they are not same
        //     return false;
        // }

        // // Use a queue for BFS
        // queue<TreeNode *> queueP;
        // queue<TreeNode *> queueQ;

        // queueP.push(p);
        // queueQ.push(q);

        // while (!queueP.empty() && !queueQ.empty())
        // {
        //     TreeNode *currentP = queueP.front();
        //     TreeNode *currentQ = queueQ.front();

        //     queueP.pop();
        //     queueQ.pop();

        //     if (currentP->val != currentQ->val)
        //     {
        //         // Nodes have different values, so they are not same
        //         return false;
        //     }

        //     // Check left child
        //     if (currentP->left != NULL && currentQ->left != NULL)
        //     {
        //         queueP.push(currentP->left);
        //         queueQ.push(currentQ->left);
        //     }
        //     else if (currentP->left != NULL || currentQ->left != NULL)
        //     {
        //         // One of the nodes has no left child, so they are not same
        //         return false;
        //     }

        //     // Check right child
        //     if (currentP->right != NULL && currentQ->right != NULL)
        //     {
        //         queueP.push(currentP->right);
        //         queueQ.push(currentQ->right);
        //     }
        //     else if (currentP->right != NULL || currentQ->right != NULL)
        //     {
        //         // One of the nodes has no right child, so they are not same
        //         return false;
        //     }
        // }

        // // If both queues are empty, then they are same
        // return queueP.empty() && queueQ.empty();

        // DFS approach

        // Base case: Both nodes are null, so they are same
        if (p == nullptr && q == nullptr)
            return true;

        // Base case: One of the nodes is null, so they are not same
        if (p == nullptr || q == nullptr)
            return false;

        // Compare the values of the current nodes
        // Check if the values of the nodes are the same
        if (p->val != q->val)
            return false;

        // Check if the left and right subtrees are the same
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main()
{
    TreeNode *p = new TreeNode(1);
    TreeNode *q = new TreeNode(1);

    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    q->left = new TreeNode(2);
    q->right = new TreeNode(3);

    Solution s;

    cout << s.isSameTree(p, q) << endl;

    p = new TreeNode(1);
    q = new TreeNode(1);

    p->left = new TreeNode(2);
    q->left = new TreeNode(1);

    cout << s.isSameTree(p, q) << endl;
    return 0;
}