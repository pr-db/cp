#include <bits/stdc++.h>
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
	void travel(TreeNode *root, vector<vector<int>> &ans)
	{
		queue<TreeNode *> Q;
		queue<TreeNode *> Q2;
		Q.push(root);
		vector<int> t;
		while (Q.size())
		{
			TreeNode *cur = Q.front();
			Q.pop();

			if (cur)
			{
				t.push_back(cur->val);
				if (cur->left)
					Q2.push(cur->left);
				if (cur->right)
					Q2.push(cur->right);
			}
			else
				return;

			if (!Q.size())
			{
				ans.push_back(t);
				t = vector<int>();
				swap(Q, Q2);
			}
		}
	}
	vector<vector<int>> levelOrder(TreeNode *root)
	{
		vector<vector<int>> ans;
		travel(root, ans);
		return ans;
	}
};