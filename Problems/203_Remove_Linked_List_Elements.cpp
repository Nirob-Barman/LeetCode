#include <bits/stdc++.h>

using namespace std;

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
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *temp = new ListNode(-1);
        temp->next = head;
        ListNode *cur = temp;
        while (cur->next != NULL)
        {
            if (cur->next->val == val)
            {
                cur->next = cur->next->next;
            }
            else
            {
                cur = cur->next;
            }
        }
        return temp->next;
    }
};

int main()
{
    // Create list: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    Solution s;
    ListNode *newHead = s.removeElements(head, 6);
    while (newHead != NULL)
    {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
    return 0;
}