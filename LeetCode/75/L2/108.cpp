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
	TreeNode *root;
	TreeNode *maketree(vector<int> &a, int i, int j)
	{
		if (i > j || i < 0 || j >= a.size())
			return NULL;

		TreeNode *temp = new TreeNode();

		int mid = (i + j) / 2;
		temp->val = a[mid];
		temp->left = maketree(a, i, mid - 1);
		temp->right = maketree(a, mid + 1, j);

		return temp;
	}
	TreeNode *sortedArrayToBST(vector<int> &a)
	{
		TreeNode *temp = new TreeNode();
		int mid = (a.size() - 1) / 2;
		temp->val = a[mid];
		temp->left = maketree(a, 0, mid - 1);
		temp->right = maketree(a, mid + 1, a.size() - 1);

		return temp;
	}
};