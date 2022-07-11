#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{

	int c = 1;
	ListNode *h1 = list1;
	ListNode *h2 = list2;
	if (list1 == NULL)
		return list2;
	if (list2 == NULL)
		return list1;
	if (list1 == NULL && list2 == NULL)
		return NULL;
	if (list1->val < list2->val)
		c = 0;
	while (list1 != NULL && list2 != NULL)
	{
		if (c && list1->val >= list2->val)
		{
			if (list2->next == NULL)
			{
				ListNode *head = list1->next;
				list1->next = list2->next;
				list2->next = list1;
				list1 = head;
			}
			else if (list1->val < list2->next->val)
			{
				ListNode *head = list1->next;
				list1->next = list2->next;
				list2->next = list1;
				list1 = head;
			}
			else
				list2 = list2->next;
		}
		else
		{
			if (list1->next == NULL)
			{
				ListNode *head = list2->next;
				list2->next = list1->next;
				list1->next = list2;
				list2 = head;
			}
			else if (list2->val < list1->next->val)
			{
				ListNode *head = list2->next;
				list2->next = list1->next;
				list1->next = list2;
				list2 = head;
			}
			else
				list1 = list1->next;
		}
	}
	if (c)
		return h2;
	else
		return h1;
}
int main()
{
	int n;
	vector<int> a = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
	n = a.size();
	// int ans = func(a);
	// cout << ans;
	return 0;
}
