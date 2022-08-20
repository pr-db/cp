// integer break
// https://leetcode.com/problems/integer-break/

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<int> dp;

	int solve(int n)
	{
		if (n == 1)
			return 1;

		if (dp[n])
			return dp[n];

		for (int i = n - 1; i >= 1; i--)
		{
			int ans = max(solve(n - i) * i, i * (n - i));
			dp[n] = max(dp[n], ans);
		}
		return dp[n];
	}

	int integerBreak(int n)
	{
		dp = vector<int>(n + 1);
		return solve(n);
	}
};