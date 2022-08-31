#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<vector<int>> dp;
	int uniquePaths(int n, int m)
	{
		dp = vector<vector<int>>(n, vector<int>(m));
		return count(n - 1, m - 1);
	}

	int count(int i, int j)
	{
		if (i < 0 || j < 0)
			return 0;

		if (i == 0 || j == 0)
			return 1;

		if (dp[i][j])
			return dp[i][j];

		return dp[i][j] = count(i - 1, j) + count(i, j - 1);
	}
};