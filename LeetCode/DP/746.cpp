#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<int> dp;
	int mincost(vector<int> &a, int n)
	{
		if (n < 0 || n == 0 || n == 1)
			return 0;

		if (dp[n] > 0)
			return dp[n];

		return dp[n] = min(a[n - 1] + mincost(a, n - 1), a[n - 2] + mincost(a, n - 2));
	}
	int minCostClimbingStairs(vector<int> &cost)
	{
		dp = vector<int>(cost.size() + 1);
		return mincost(cost, cost.size());
	}
};