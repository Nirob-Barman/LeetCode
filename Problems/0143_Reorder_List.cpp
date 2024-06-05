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
    void reorderList(ListNode *head)
    {
        if (head == NULL)
        {
            return;
        }

        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // cout << "slow->val = Points to Middle of the list = " << slow->val << endl;

        ListNode *rev = ReverseList(slow->next);
        slow->next = NULL;

        while (rev != NULL)
        {
            ListNode *headNext = head->next;
            ListNode *revNext = rev->next;

            head->next = rev;
            rev->next = headNext;

            head = headNext;
            rev = revNext;
        }
    }

    ListNode *ReverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(3);
    l1->next->next->next = new ListNode(4);
    // l1->next->next->next->next = new ListNode(5);

    Solution s;
    s.reorderList(l1);

    while (l1 != NULL)
    {
        cout << l1->val << " "; // prints 1 5 2 4 3
        l1 = l1->next;
    }
    return 0;
}
