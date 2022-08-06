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
	int c = 0;
	int dfs(TreeNode *root)
	{
		if (c || root == NULL)
			return 0;
		int left = dfs(root->left);
		int right = dfs(root->right);
		// cout<<left<<" "<<right<<"\n";
		if (c || abs(left - right) > 1)
		{
			c = 1;
			return 0;
		}
		return 1 + max(left, right);
	}

	bool isBalanced(TreeNode *root)
	{
		if (root == NULL)
			return true;
		dfs(root);
		if (c)
			return false;
		return true;
	}
};