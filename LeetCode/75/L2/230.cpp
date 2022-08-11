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
	vector<int> a;
	int kth = 0;
	void make(TreeNode *root, int k)
	{
		if (!root)
			return;

		make(root->left, k);
		a.push_back(root->val);
		if (a.size() == k)
		{
			kth = a[k - 1];
			return;
		}
		make(root->right, k);
	}

	int kthSmallest(TreeNode *root, int k)
	{
		make(root, k);
		return kth;
	}
};