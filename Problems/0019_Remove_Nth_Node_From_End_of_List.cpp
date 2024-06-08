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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head;
        int len = 0;

        while (temp != NULL)
        {
            temp = temp->next;
            len++;
        }

        temp = head;
        int pos = len - n;

        // if head is the node to be deleted
        if (pos == 0)
        {
            return head->next;
        }

        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;

        return head;
    }
};

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution s;
    head = s.removeNthFromEnd(head, 2);
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}