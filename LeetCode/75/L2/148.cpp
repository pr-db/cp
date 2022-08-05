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
	void printList(ListNode *head)
	{
		while (head)
		{
			cout << head->val << " ";
			head = head->next;
		}
		cout << "\n";
	}
	ListNode *sortList(ListNode *head)
	{
		if (head == NULL || head->next == NULL)
			return head;
		ListNode *s = head, *f = head->next;
		while (f && f->next)
		{
			s = s->next;
			f = f->next->next;
		}
		f = s->next;
		s->next = NULL;
		ListNode *a = sortList(head);
		ListNode *b = sortList(f);

		return merge(a, b);
	}
	ListNode *merge(ListNode *a, ListNode *b)
	{
		ListNode *h = new ListNode();
		ListNode *head = h;
		while (a && b)
		{
			if (a->val <= b->val)
			{
				head->next = a;
				a = a->next;
			}
			else
			{
				head->next = b;
				b = b->next;
			}
			head = head->next;
		}
		while (a != NULL)
		{
			head->next = a;
			a = a->next;
			head = head->next;
		}
		while (b != NULL)
		{
			head->next = b;
			b = b->next;
			head = head->next;
		}
		return h->next;
	}
};