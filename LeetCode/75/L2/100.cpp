#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
	bool ans = true;
	bool isSameTree(TreeNode *p, TreeNode *q)
	{

		if (!ans)
			return false;
		if (!p && !q)
			return true;
		if (!p || !q)
		{
			ans = false;
			return false;
		}

		cout << p->val << "," << q->val << " ";

		if (p->val != q->val)
		{
			ans = false;
			return false;
		}
		bool lt = isSameTree(p->left, q->left);
		bool rt = isSameTree(p->right, q->right);
		return lt && rt;
	}
};