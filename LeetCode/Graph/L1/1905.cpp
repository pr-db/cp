#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int countSubIslands(vector<vector<int>> &F, vector<vector<int>> &G)
	{
		queue<pair<int, int>> Q;
		int n = F.size(), m = 0;
		if (n)
			m = F[0].size();
		int ans = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (G[i][j])
					F[i][j] -= 2;

		// for (int i = 0; i < n; i++)
		// {
		// 	for (int j = 0; j < m; j++)
		// 		if (F[i][j] >= 0)
		// 			cout << " " << F[i][j] << " ";
		// 		else
		// 			cout << F[i][j] << " ";
		// 	cout << "\n";
		// }

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (F[i][j] == -1)
				{
					Q.push(make_pair(i, j));
					F[i][j] = 0;
					int c = 1;
					int a = 0;
					while (Q.size())
					{
						pair<int, int> cur = Q.front();
						int x = cur.first, y = cur.second;
						Q.pop();

						if (F[x][y] == -2)
						{
							c = 0;
							F[x][y] = 0;
						}
						// cout << c << "," << F[x][y] << " ";
						if (x + 1 < n && F[x + 1][y] < 0)
						{
							Q.push(make_pair(x + 1, y));
							if (F[x + 1][y] == -1)
								F[x + 1][y] = 0;
						}
						if (y + 1 < m && F[x][y + 1] < 0)
						{
							Q.push(make_pair(x, y + 1));
							if (F[x][y + 1] == -1)
								F[x][y + 1] = 0;
						}
						if (x - 1 >= 0 && F[x - 1][y] < 0)
						{
							Q.push(make_pair(x - 1, y));
							if (F[x - 1][y] == -1)
								F[x - 1][y] = 0;
						}
						if (y - 1 >= 0 && F[x][y - 1] < 0)
						{
							Q.push(make_pair(x, y - 1));
							if (F[x][y - 1] == -1)
								F[x][y - 1] = 0;
						}
					}
					if (c)
						ans++;
					// cout << "\n";
				}
		return ans;
	}
};

int main()
{
	Solution sol;
	int n, m;
	cin >> n >> m;
	vector<vector<int>> F;
	vector<vector<int>> G;
	for (int i = 0; i < n; i++)
	{
		vector<int> t(m);
		for (int j = 0; j < m; j++)
			cin >> t[j];
		F.push_back(t);
	}
	for (int i = 0; i < n; i++)
	{
		vector<int> t(m);
		for (int j = 0; j < m; j++)
			cin >> t[j];
		G.push_back(t);
	}

	cout << sol.countSubIslands(F, G);
}