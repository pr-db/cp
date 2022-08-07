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
typedef long long ll;
class Solution
{
public:
	int pathSum(TreeNode *root, int sum)
	{
		if (!root)
			return 0;
		return sumup(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
	}
	int sumup(TreeNode *root, long long pre, int sum)
	{
		if (!root)
			return 0;
		long long cur = pre + root->val;
		return (cur == (ll(sum))) + sumup(root->left, cur, sum) + sumup(root->right, cur, sum);
	}
};