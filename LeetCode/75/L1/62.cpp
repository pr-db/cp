#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution
{
public:
	vector<vector<int>> dp;
	int uniquePaths(int n, int m)
	{
		dp = vector<vector<int>>(n, vector<int>(m, -1));

		return countPath(n - 1, m - 1);
	}
	int countPath(int n, int m)
	{
		if (n < 0 || m < 0)
			return 0;
		else if (m == 0 || n == 0)
			return dp[n][m] = 1;
		else if (dp[n][m] > 0)
			return dp[n][m];
		else
			return dp[n][m] = countPath(n - 1, m) + countPath(n, m - 1);
	}
};