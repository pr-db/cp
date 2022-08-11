#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<vector<int>> adj;
	vector<int> in;
	vector<int> findOrder(int n, vector<vector<int>> &pre)
	{
		in = vector<int>(n);
		adj = vector<vector<int>>(n);
		for (int i = 0; i < pre.size(); i++)
			adj[pre[i][1]].push_back(pre[i][0]), in[pre[i][0]]++;
		queue<int> q;
		for (int i = 0; i < n; i++)
			if (!in[i])
				q.push(i);
		vector<int> ans;
		while (q.size())
		{
			int cur = q.front();
			q.pop();
			ans.push_back(cur);
			for (auto u : adj[cur])
			{
				in[u]--;
				if (!in[u])
					q.push(u);
			}
		}
		if (ans.size() != n)
			ans.clear();
		return ans;
	}
};