/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
	bool isPalindrome(ListNode *head)
	{
		ListNode *s = head, *f = head, *ps = NULL, *temp;
		while (f && f->next)
		{
			f = f->next->next;
			temp = s->next;
			s->next = ps;
			ps = s;
			s = temp;
		}
		if (f)
			s = s->next;
		while (s)
		{
			if (s->val != ps->val)
				return false;
			s = s->next;
			ps = ps->next;
		}
		return true;
	}
};