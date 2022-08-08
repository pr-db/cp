#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
	map<string, set<pair<string, double>>> adj;

public:
	double dfs(string node, string &end, double curr, map<string, bool> &vis)
	{
		if (node == end && adj.find(node) != adj.end())
		{
			return curr;
		}

		vis[node] = true;
		cout << node << "\n";
		for (auto x : adj[node])
		{
			string c = x.first;
			double cnt = x.second;
			if (!vis[c])
			{

				double val = dfs(c, end, curr * cnt, vis);
				if (val != -1)
				{
					return val;
				}
			}
		}

		return -1;
	}

	vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
	{
		int n = equations.size();

		for (int i = 0; i < n; i++)
		{
			adj[equations[i][0]].insert({equations[i][1], values[i]});
			adj[equations[i][1]].insert({equations[i][0], 1 / values[i]});
		}

		vector<double> ans;
		int m = queries.size();

		for (int i = 0; i < m; i++)
		{
			map<string, bool> vis;
			double curr = 1;
			double sum = dfs(queries[i][0], queries[i][1], curr, vis);
			for (auto u : vis)
				cout << u.first << "," << u.second << " ";
			ans.push_back(sum);
		}

		return ans;
	}
};