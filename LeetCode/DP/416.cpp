#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<vector<int>> dp;

	bool target(vector<int> &a, int i, int sum)
	{
		if (i < 0)
			return false;

		if (sum == 0)
			return true;

		if (dp[i][sum] != -1)
			return dp[i][sum];

		if (sum - a[i] >= 0)
			return dp[i][sum] = (target(a, i - 1, sum - a[i]) || target(a, i - 1, sum));

		return dp[i][sum] = target(a, i - 1, sum);
	}

	bool canPartition(vector<int> &nums)
	{

		int sum = accumulate(nums.begin(), nums.end(), 0);

		if (sum % 2)
			return false;
		sum = sum / 2;

		dp = vector<vector<int>>(nums.size(), vector<int>(sum + 1, -1));

		return target(nums, nums.size() - 1, sum);
	}
};