#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<vector<int>> diagonalSort(vector<vector<int>> &a)
	{
		map<int, priority_queue<int>> mp;
		int n = a.size();
		int m = a[0].size();
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				mp[i - j].push(a[i][j]);

		cout << mp.size();
		cout << mp[0].size();

		for (int i = n - 1; i >= 0; i--)
			for (int j = m - 1; j >= 0; j--)
			{
				a[i][j] = mp[i - j].top();
				mp[i - j].pop();
			}

		return a;
	}
};
