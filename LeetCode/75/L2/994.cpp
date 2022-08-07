#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	int orangesRotting(vector<vector<int>> &grid)
	{
		queue<pair<int, int>> q;
		int n = grid.size();
		int m = grid[0].size();
		int ct = 0;
		for (int i = 0; i < grid.size(); i++)
			for (int j = 0; j < grid[i].size(); j++)
				if (grid[i][j] == 2)
					q.push({i, j});
				else if (grid[i][j] == 1)
					ct++;
		int ans = 0;
		if (!ct)
			return 0;
		while (q.size())
		{
			queue<pair<int, int>> Q;
			swap(Q, q);
			ans++;

			while (Q.size())
			{
				int i = Q.front().first;
				int j = Q.front().second;
				Q.pop();
				if (i - 1 >= 0 && grid[i - 1][j] == 1)
					grid[i - 1][j] = 2, q.push({i - 1, j});
				if (j - 1 >= 0 && grid[i][j - 1] == 1)
					grid[i][j - 1] = 2, q.push({i, j - 1});
				if (i + 1 < n && grid[i + 1][j] == 1)
					grid[i + 1][j] = 2, q.push({i + 1, j});
				if (j + 1 < m && grid[i][j + 1] == 1)
					grid[i][j + 1] = 2, q.push({i, j + 1});
			}
		}
		for (int i = 0; i < grid.size(); i++)
			for (int j = 0; j < grid[i].size(); j++)
				if (grid[i][j] == 1)
					return -1;
		return ans - 1;
	}
};