#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<vector<int>> dp;
	int coinChange(vector<int> &coins, int amount)
	{
		dp = vector<vector<int>>(coins.size(), vector<int>(amount + 1, INT_MAX));
		int ans = coinchan(coins, amount, coins.size() - 1);
		if (ans == 1e4 + 1)
			return -1;
		return ans;
	}
	int coinchan(vector<int> &coins, int rem, int n)
	{
		if (n < 0)
			return 1e4 + 1;
		if (rem == 0)
			return 0;

		if (dp[n][rem] != INT_MAX)
			return dp[n][rem];
		if (rem - coins[n] >= 0)
			return dp[n][rem] = min(coinchan(coins, rem - coins[n], n) + 1, coinchan(coins, rem, n - 1));
		return dp[n][rem] = coinchan(coins, rem, n - 1);
	}
};