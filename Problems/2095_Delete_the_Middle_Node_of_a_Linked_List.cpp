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
    int len_of_list(ListNode *head)
    {
        int cnt = 0;
        while (head != NULL)
        {
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode *deleteMiddle(ListNode *head)
    {
        ListNode *temp = head;
        int len = len_of_list(temp);
        // if the list has only one node, return NULL due to deletion
        if (len == 1)
            return NULL;
        // temp has reached the end of the list (NULL)
        temp = head;
        for (int i = 1; i < len / 2; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};

int main()
{
    // Create list: 1 -> 3 -> 4 -> 7 -> 1 -> 2 -> 6
    ListNode *head = new ListNode(1);
    head->next = new ListNode(3);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(7);
    head->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next = new ListNode(6);
    Solution s;
    ListNode *newHead = s.deleteMiddle(head);
    while (newHead != NULL)
    {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
    return 0;
}
/*
temp and head are not separate linked lists.
They are just two pointers pointing to the same list
head
  |
  v
[1] -> [3] -> [4] -> [7] -> [1] -> [2] -> [6] -> NULL
  ^
  |
temp
*/