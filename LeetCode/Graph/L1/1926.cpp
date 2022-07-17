#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int nearestExit(vector<vector<char>> &grid, vector<int> &en)
	{
		auto n = grid.size();
		auto m = grid[0].size();
		queue<pair<int, int>> Q;
		Q.push({en[0], en[1]});
		grid[en[0]][en[1]] = 0;
		int ans = 0;
		int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

		while (!Q.empty())
		{
			ans++;
			queue<pair<int, int>> q;

			while (!Q.empty())
			{
				auto cur = Q.front();
				Q.pop();
				int x, y;
				for (int i = 0; i < 4; i++)
				{
					x = cur.first + dir[i][0];
					y = cur.second + dir[i][1];
					if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.')
					{
						// cout<<x<<","<<y<<" ";
						// cout<<grid[x][y]<<" ";
						if (x == n - 1 || x == 0 || y == m - 1 || y == 0)
						{
							return ans;
						}

						q.push({x, y});
						grid[x][y] = ans;
					}
				}
			}
			swap(q, Q);
		}
		return -1;
	}
};