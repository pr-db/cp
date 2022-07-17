#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
	{
		int m, n;
		if (!mat.size())
			return mat;
		n = mat.size();
		m = mat[0].size();
		queue<pair<int, int>> Q;
		vector<vector<int>> vis(n, vector<int>(m, INT_MAX));

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (!mat[i][j])
				{
					Q.push({i, j});
					vis[i][j] = 0;
				}
		int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

		while (!Q.empty())
		{
			pair<int, int> cur = Q.front();
			int x, y;
			Q.pop();
			for (int i = 0; i < 4; i++)
			{
				x = cur.first + dir[i][0];
				y = cur.second + dir[i][1];
				if (x >= 0 && x < n && y >= 0 && y < m && vis[x][y] > vis[cur.first][cur.second] + 1)
				{
					vis[x][y] = vis[cur.first][cur.second] + 1;
					Q.push({x, y});
				}
			}
		}
		return vis;
	}
};