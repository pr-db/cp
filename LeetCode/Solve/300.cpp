#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

class Solution
{
public:
	vector<int> dp;
	int n;
	int lengthOfLIS(vector<int> &a)
	{
		n = a.size();
		a.push_back(INT_MIN);
		dp = vector<int>(n + 1, -1);
		return lis(a, 0, n);
	}
	int lis(vector<int> &a, int i, int j)
	{
		if (i >= n)
			return 0;
		if (dp[j] >= 0)
			return dp[j];
		if (a[i] > a[j])
			dp[j] = max(dp[j], 1 + lis(a, i + 1, i));
		dp[j] = max(dp[j], lis(a, i + 1, j));
		return dp[j];
	}
	int solve(vector<int> &a, int i, int prev_i)
	{
		if (i >= n)
			return 0;
		if (dp[prev_i] != -1)
			return dp[prev_i];
		int take = 0, dontTake = solve(a, i + 1, prev_i);
		if (a[i] > a[prev_i])
			take = 1 + solve(a, i + 1, i);
		return dp[prev_i] = max(take, dontTake);
	}
};