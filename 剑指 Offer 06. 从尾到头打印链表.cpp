#include<iostream>
#include<vector>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> res;
        while (head)
        {
            res.emplace_back(head->val);
            head = head->next;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        ListNode* result = NULL;
        if (l1->val < l2->val) {
            result = l1;
            result->next = mergeTwoLists(l1->next, l2);
        }
        else {
            result = l2;
            result->next = mergeTwoLists(l1, l2->next);
        }
        return result;
    }
};