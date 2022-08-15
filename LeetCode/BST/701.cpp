#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

 struct TreeNode {
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
	TreeNode *insertIntoBST(TreeNode *root, int val)
	{
		auto node = root;
		if (!root)
			return new TreeNode(val);
		while (node)
		{
			if (node->val > val)
			{
				if (node->left)
					node = node->left;
				else
				{
					node->left = new TreeNode(val);
					break;
				}
			}
			else
			{
				if (node->right)
					node = node->right;
				else
				{
					node->right = new TreeNode(val);
					break;
				}
			}
		}

		return root;
	}
};