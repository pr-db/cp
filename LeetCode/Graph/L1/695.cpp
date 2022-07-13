#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int maxAreaOfIsland(vector<vector<int>> &grid)
	{
		queue<pair<int, int>> Q;
		int n = grid.size(), m = 0;
		if (n)
			m = grid[0].size();
		int ans = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (grid[i][j] == 1)
				{
					Q.push(make_pair(i, j));
					grid[i][j] = 0;
					int a = 1;
					while (Q.size())
					{
						pair<int, int> cur = Q.front();
						int x = cur.first, y = cur.second;
						Q.pop();
						if (x + 1 < n && grid[x + 1][y] == 1)
						{
							Q.push(make_pair(x + 1, y));
							grid[x + 1][y] = 0;
							a++;
						}
						if (y + 1 < m && grid[x][y + 1] == 1)
						{
							Q.push(make_pair(x, y + 1));
							grid[x][y + 1] = 0;
							a++;
						}
						if (x - 1 >= 0 && grid[x - 1][y] == 1)
						{
							Q.push(make_pair(x - 1, y));
							grid[x - 1][y] = 0;
							a++;
						}
						if (y - 1 >= 0 && grid[x][y - 1] == 1)
						{
							Q.push(make_pair(x, y - 1));
							grid[x][y - 1] = 0;
							a++;
						}
					}
					// cout<<a<<"\n";
					ans = max(ans, a);
				}
		return ans;
	}
};

