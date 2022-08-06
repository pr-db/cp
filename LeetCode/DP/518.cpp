#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<vector<int>> dp;
	int change(int target, vector<int> &nums)
	{
		dp = vector<vector<int>>(nums.size(), vector<int>(target + 1, -1));
		return comb(nums, nums.size() - 1, target);
	}
	int comb(vector<int> &nums, int n, int rem)
	{
		if (rem == 0)
			return 1;
		if (n < 0)
			return 0;
		if (dp[n][rem] >= 0)
			return dp[n][rem];
		if (rem - nums[n] >= 0)
			return dp[n][rem] = comb(nums, n, rem - nums[n]) + comb(nums, n - 1, rem);
		return dp[n][rem] = comb(nums, n - 1, rem);
	}
};