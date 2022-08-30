#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int ans = INT_MAX;
	int n;

	vector<vector<int>> dp;

	int sum(vector<vector<int>> &a, int i, int j)
	{
		if (i >= n)
			return 0;
		if (j >= n || j < 0)
			return INT_MAX;

		if (dp[i][j] != INT_MIN)
			return dp[i][j];

		return dp[i][j] = a[i][j] + min(sum(a, i + 1, j), min(sum(a, i + 1, j - 1), sum(a, i + 1, j + 1)));
	}

	int minFallingPathSum(vector<vector<int>> &a)
	{
		n = a.size();
		dp = vector<vector<int>>(n, vector<int>(n, INT_MIN));
		for (int i = 0; i < n; i++)
			ans = min(ans, sum(a, 0, i)), cout << ans << " ";
		return ans;
	}
};