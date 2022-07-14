#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int numEnclaves(vector<vector<int>> &grid)
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
					int c = 1;
					int a = 0;
					int ct = 0;
					while (Q.size())
					{
						pair<int, int> cur = Q.front();
						int x = cur.first, y = cur.second;
						ct++;
						Q.pop();
						c = (x && y && (x != n - 1) && (y != m - 1));

						if (x + 1 < n && grid[x + 1][y] == 1)
						{
							Q.push(make_pair(x + 1, y));
							grid[x + 1][y] = 0;
						}
						if (y + 1 < m && grid[x][y + 1] == 1)
						{
							Q.push(make_pair(x, y + 1));
							grid[x][y + 1] = 0;
						}
						if (x - 1 >= 0 && grid[x - 1][y] == 1)
						{
							Q.push(make_pair(x - 1, y));
							grid[x - 1][y] = 0;
						}
						if (y - 1 >= 0 && grid[x][y - 1] == 1)
						{
							Q.push(make_pair(x, y - 1));
							grid[x][y - 1] = 0;
						}
						if (!c)
							a++;
						cout << ct << " ";
					}
					if (!a)
						ans += ct;
					cout << "\n";
				}
		return ans;
	}
};

int main()
{
	Solution sol;
	int n, m;
	cin >> n >> m;
	vector<vector<int>> grid;
	for (int i = 0; i < n; i++)
	{
		vector<int> t(m);
		for (int j = 0; j < m; j++)
			cin >> t[j];
		grid.push_back(t);
	}
	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < m; j++)
	// 		cout << grid[i][j] << " ";
	// 	cout << "\n";
	// }
	cout << sol.numEnclaves(grid);
}