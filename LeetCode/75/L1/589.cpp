#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
	int val;
	vector<Node *> children;

	Node() {}

	Node(int _val)
	{
		val = _val;
	}

	Node(int _val, vector<Node *> _children)
	{
		val = _val;
		children = _children;
	}
};

class Solution
{
public:
	void travel(Node *root, vector<int> &ans)
	{
		if (root == NULL)
			return;
		ans.push_back(root->val);
		for (auto u : root->children)
			travel(u, ans);
	}

	vector<int> preorder(Node *root)
	{
		vector<int> ans;
		travel(root, ans);
		return ans;
	}
};