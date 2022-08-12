#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<vector<int>> adj;
	vector<vector<int>> graph;
	int numBusesToDestination(vector<vector<int>> &routes, int source, int target)
	{
		if (source == target)
			return 0;

		map<int, int> m;
		int k = 1;
		for (int i = 0; i < routes.size(); i++)
			for (auto u : routes[i])
				if (!m[u])
					m[u] = k++;

		adj = vector<vector<int>>(k);
		graph = vector<vector<int>>(routes.size());

		for (int i = 0; i < routes.size(); i++)
			for (auto u : routes[i])
				adj[m[u] - 1].push_back(i);

		for (int i = 0; i < adj.size(); i++)
			for (int l = 0; l < adj[i].size(); l++)
				for (int r = 0; r < adj[i].size(); r++)
					if (l != r)
						graph[adj[i][l]].push_back(adj[i][r]);

		long long ans = 1;
		map<int, int> tar;

		if (!m[target])
			return -1;
		for (auto u : adj[m[target] - 1])
			tar[u]++;

		queue<pair<int, long long>> que;
		for (auto u : adj[m[source] - 1])
		{
			if (tar[u])
				return 1;
			que.push({u, 1});
		}

		int f = 0;

		vector<int> vis(routes.size());
		while (!f && que.size())
		{
			int cur = que.front().first;
			long long dist = que.front().second;
			cout << cur << "," << dist << " ";
			que.pop();

			for (auto u : graph[cur])
			{
				if (tar[u])
				{
					f = 1;
					ans = dist + 1;
					break;
				}
				else if (!vis[u])
				{
					vis[u] = 1;
					que.push({u, dist + 1});
				}
			}
		}

		if (!f)
			return -1;
		return ans;
	}
};