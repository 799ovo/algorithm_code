#include<iostream>
using namespace std;
struct ListNode
{
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		if (head == nullptr)
			return nullptr;
		ListNode* pre = nullptr;
		ListNode* cur = head;
		while (cur)
		{
			ListNode* tmp = cur -> next;
			cur->next = pre;
			pre = cur;
			cur = tmp;
		}
		return pre;
	}
};