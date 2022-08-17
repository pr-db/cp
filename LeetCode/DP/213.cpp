#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<int> dp;

	int house(vector<int> &a, int n, int i)
	{
		if (i >= n)
			return 0;

		if (dp[i] >= 0)
			return dp[i];

		return dp[i] = max(a[i] + house(a, n, i + 2), house(a, n, i + 1));
	}

	int rob(vector<int> &nums)
	{

		dp = vector<int>(nums.size(), -1);
		int n = nums.size();

		if (n == 1)
			return nums[0];

		int ans = house(nums, n - 1, 0);
		dp = vector<int>(nums.size(), -1);

		return max(ans, house(nums, n, 1));
	}
};