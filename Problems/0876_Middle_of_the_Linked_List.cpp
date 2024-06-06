#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        // int sz=size(head);
        // ListNode* temp= head;
        // for(int i=1;i<=sz/2;i++)
        // {
        //     temp=temp->next;
        // }
        // return temp;

        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // cout<<slow->val<<endl;
        return slow;
    }

    int size(ListNode *head)
    {
        ListNode *temp = head;
        int cnt = 0;
        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
};

int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(3);
    l1->next->next->next = new ListNode(4);

    Solution s;
    cout << s.middleNode(l1)->val;
    return 0;
}