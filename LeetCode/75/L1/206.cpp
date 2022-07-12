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

ListNode *reverseList(ListNode *head)
{

	if (head == NULL)
		return head;
	ListNode *h = new ListNode();
	h->val = head->val;
	head = head->next;
	while (head != NULL)
	{
		ListNode *temp = new ListNode();
		temp->val = head->val;
		temp->next = h;
		h = temp;
		head = head->next;
	}
	return h;
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
