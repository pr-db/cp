#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<int> dp;

	int combinationSum4(vector<int> &nums, int target)
	{
		dp = vector<int>(target + 1, -1);
		return comb(nums, nums.size() - 1, target);
	}
	int comb(vector<int> &nums, int n, int rem)
	{
		if (rem == 0)
			return 1;
		if (n < 0)
			return 0;
		if (dp[rem] >= 0)
			return dp[rem];
		if (rem - nums[n] >= 0)
			return dp[rem] = comb(nums, nums.size() - 1, rem - nums[n]) + comb(nums, n - 1, rem);
		return dp[rem] = comb(nums, n - 1, rem);
	}
};