#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
{
	vector<int> a;
	int m = grid.size();
	int n = grid[0].size();
	int l = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a.push_back(grid[i][j]);
	k %= a.size();
	reverse(a.begin(), a.end());
	reverse(a.begin(), a.begin() + k);
	reverse(a.begin() + k, a.end());
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			grid[i][j] = a[l++];
	return grid;
}
int main()
{
	int m, n, k;
	cin >> m >> n >> k;
	vector<vector<int>> a(m, vector<int>(n, 0));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	a = shiftGrid(a, k);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j];
		cout << "\n";
	}
	return 0;
}
