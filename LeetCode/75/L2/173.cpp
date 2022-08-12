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

class BSTIterator
{
public:
	vector<int> a;
	int k = 0;
	int n = 0;
	TreeNode *ret(TreeNode *root)
	{
		if (!root)
			return NULL;

		TreeNode *left = ret(root->left);

		if (!left)
		{
			a.push_back(root->val);
			ret(root->right);
		}
		return NULL;
	}

	BSTIterator(TreeNode *root)
	{
		ret(root);
		n = a.size();
	}

	int next()
	{
		return a[k++];
	}

	bool hasNext()
	{
		if (k < n)
			return true;
		return false;
	}
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */