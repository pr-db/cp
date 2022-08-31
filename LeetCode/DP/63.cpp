#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<vector<int>> dp;
	int n, m;
	int uniquePathsWithObstacles(vector<vector<int>> &a)
	{
		n = a.size();
		m = a[0].size();
		dp = vector<vector<int>>(n, vector<int>(m));
		int ct = 0;
		for (int i = 0; i < m; i++)
			if (a[0][i])
				break;
			else
				dp[0][i] = 1;

		for (int i = 0; i < n; i++)
			if (a[i][0])
				break;
			else
				dp[i][0] = 1;
		return count(n - 1, m - 1, a);
	}

	int count(int i, int j, vector<vector<int>> &a)
	{
		if (i < 0 || j < 0)
			return 0;

		if (a[i][j])
			return 0;

		if (i == 0 || j == 0)
			return dp[i][j];

		if (dp[i][j])
			return dp[i][j];

		return dp[i][j] = count(i - 1, j, a) + count(i, j - 1, a);
	}
};