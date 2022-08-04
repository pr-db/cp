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
	ListNode *removeNthFromEnd(ListNode *head, int n)
	{
		int siz = 0;
		ListNode *node = new ListNode();
		node = head;
		while (node)
		{
			node = node->next;
			siz++;
		}
		if (siz == 1)
			return NULL;
		if (siz == n)
		{
			head = head->next;
			return head;
		}
		n = siz - n - 1;
		node = head;
		while (n-- > 0)
		{
			node = node->next;
		}
		node->next = node->next->next;
		return head;
	}
};