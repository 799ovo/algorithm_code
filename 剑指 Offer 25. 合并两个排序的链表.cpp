#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
        else
        {
            ListNode* res = NULL;
            if (l1->val < l2->val)
            {
                res = l1;
                res->next = mergeTwoLists(l1->next, l2);
            }
            else if (l1->val >= l2->val)
            {
                res = l2;
                res->next = mergeTwoLists(l1, l2->next);
            }
            return res;
        }
    }
};