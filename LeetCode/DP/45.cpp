#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<int> dp;
	int jump(vector<int> &nums)
	{
		dp = vector<int>(nums.size(), 10001);
		return solve(nums, 0);
	}

	int solve(vector<int> &a, int i)
	{
		if (i >= a.size() - 1)
			return 0;

		if (dp[i] != 10001)
			return dp[i];

		for (int j = 1; j <= a[i]; j++)
			dp[i] = min(dp[i], solve(a, i + j) + 1);

		return dp[i];
	}
};
