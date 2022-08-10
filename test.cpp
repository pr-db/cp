#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
	int val;
	Tree *left;
	Tree *right;
	Tree() : val(0), left(nullptr), right(nullptr){};
};

Tree *makeSubTree(vector<int> &a, int i, int j)
{
	if (i > j || i < 0 || j >= a.size())
		return NULL;

	Tree *node = new Tree();
	int mid = (i + j) / 2;
	node->val = a[mid];

	// node->left = makeSubTree(a, i, mid - 1);
	// node->right = makeSubTree(a, mid+1, j);

	cout << node->val << " ";
	// cout << node->left << " ";
	// cout << node->right << " ";

	return node;
}

void traverse(Tree *head)
{
	if (!head)
		return;
	cout << head->val << " ";
	traverse(head->left);
	traverse(head->right);
}

int main()
{

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	Tree *head = new Tree();
	int mid = (n - 1) / 2;
	head->val = a[mid];

	head->left = makeSubTree(a, 0, mid - 1);
	head->right = makeSubTree(a, mid + 1, n - 1);

	// cout << head->val << " ";
	// cout << head->left->val << " ";
	// cout << head->right->val << " ";
	// traverse(head);

	return 0;
}
/*
1
1 2 3 4 5
*/