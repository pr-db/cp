#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<vector<int>> adj;
	vector<int> vis;

	int bfs(int start)
	{
		queue<int> q;
		q.push(start);
		int ans = 0;
		while (q.size())
		{
			int cur = q.front();
			ans++;
			vis[cur] = 1;
			q.pop();
			for (auto u : adj[cur])
				if (vis[u] == 0)
					q.push(u);
		}
		return ans;
	}

	int reachableNodes(int n, vector<vector<int>> &edges, vector<int> &res)
	{
		adj = vector<vector<int>>(n);
		for (int i = 0; i < n - 1; i++)
			adj[edges[i][0]].push_back(edges[i][1]), adj[edges[i][1]].push_back(edges[i][0]);

		vis = vector<int>(n, 0);
		for (int i = 0; i < res.size(); i++)
			vis[res[i]] = -1;

		return bfs(0);
	}
};