#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;

        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry)
        {
            int sum = 0;

            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;
            carry = sum / 10;

            // create a new node with sum % 10 as the value
            ListNode *newNode = new ListNode(sum % 10);
            // add the new node to the list
            temp->next = newNode;
            // move the temp pointer to the new node
            temp = temp->next;
        }
        // return the head of the list
        return dummy->next;
    }
};

int main()
{
    // Creating linked list l1: [2, 4, 3]
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Creating linked list l1: [9, 9, 9, 9, 9, 9, 9]
    // ListNode *l1 = new ListNode(9);
    // l1->next = new ListNode(9);
    // l1->next->next = new ListNode(9);
    // l1->next->next->next = new ListNode(9);
    // l1->next->next->next->next = new ListNode(9);
    // l1->next->next->next->next->next = new ListNode(9);
    // l1->next->next->next->next->next->next = new ListNode(9);

    // Creating linked list l1: [0]
    // ListNode *l1 = new ListNode(0);

    // Creating linked list l2: [5, 6, 4]
    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    // Creating linked list l2: [9, 9, 9, 9]
    // ListNode *l2 = new ListNode(9);
    // l2->next = new ListNode(9);
    // l2->next->next = new ListNode(9);
    // l2->next->next->next = new ListNode(9);

    // Creating linked list l2: [0]
    // ListNode *l2 = new ListNode(0);

    Solution solution;

    ListNode *result = solution.addTwoNumbers(l1, l2);

    cout << "Resulting Linked List: ";
    while (result != nullptr)
    {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
}