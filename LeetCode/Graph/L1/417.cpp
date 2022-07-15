#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	queue<pair<int, int>> Q;
	vector<vector<int>> ans;
	vector<vector<int>> a, p;
	vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
	{
		if (!heights.size())
			return ans;
		int m = heights.size();
		int n = heights[0].size();
		a = p = vector<vector<int>>(m, vector<int>(n));

		for (int i = 0; i < m; i++)
			bfs(heights, p, i, 0),
				bfs(heights, a, i, n - 1);
		for (int i = 0; i < n; i++)
			bfs(heights, p, 0, i),
				bfs(heights, a, m - 1, i);
		return ans;
	}

	void bfs(vector<vector<int>> &mat, vector<vector<int>> &visited, int i, int j)
	{
		Q.push({i, j});
		while (!Q.empty())
		{
			tie(i, j) = Q.front();
			Q.pop();
			if (visited[i][j])
				continue;
			visited[i][j] = true;
			if (a[i][j] && p[i][j])
				ans.push_back(vector<int>{i, j});
			if (i + 1 < mat.size() && mat[i + 1][j] >= mat[i][j])
				Q.push({i + 1, j});
			if (i - 1 >= 0 && mat[i - 1][j] >= mat[i][j])
				Q.push({i - 1, j});
			if (j + 1 < mat[0].size() && mat[i][j + 1] >= mat[i][j])
				Q.push({i, j + 1});
			if (j - 1 >= 0 && mat[i][j - 1] >= mat[i][j])
				Q.push({i, j - 1});
		}
	}
};