#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int maxDistance(vector<vector<int>> &grid)
	{
		int n = grid.size();
		queue<pair<int, int>> Q, P;
		int c = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (grid[i][j])
					Q.push({i + 1, j}), Q.push({i - 1, j}), Q.push({i, j + 1}), Q.push({i, j - 1});
		while (Q.size())
		{
			c++;
			while (Q.size())
			{
				int i = Q.front().first, j = Q.front().second;
				Q.pop();
				if (i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == 0)
				{
					grid[i][j] = c;
					P.push({i + 1, j}), P.push({i - 1, j}), P.push({i, j + 1}), P.push({i, j - 1});
				}
			}
			swap(P, Q);
		}

		// for(int i=0;i<n;i++){
		//     for(int j=0;j<n;j++)
		//         cout<<grid[i][j]<<" ";
		//     cout<<"\n";
		// }

		return c == 1 ? -1 : c - 1;
	}
};