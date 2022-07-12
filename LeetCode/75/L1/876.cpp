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

ListNode *middleNode(ListNode *head)
{
	ListNode *h = head;
	int n = 0;
	while (head != NULL)
	{
		n++;
		head = head->next;
	}
	for (int i = 0; i < n / 2; i++)
		h = h->next;
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
