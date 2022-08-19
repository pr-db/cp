#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<int> dp;

	int solve(vector<int> &a, int i)
	{
		if (i < 0)
			return 0;

		if (dp[i] != INT_MIN)
			return dp[i];

		dp[i] = solve(a, i - 1);
		if (dp[i] <= 0)
			return dp[i] = a[i];
		return dp[i] += a[i];
	}

	int maxSubArray(vector<int> &a)
	{
		dp = vector<int>(a.size(), INT_MIN);
		solve(a, a.size() - 1);

		return *max_element(dp.begin(), dp.end());
	}
};
