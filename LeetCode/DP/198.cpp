#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<int> dp;

	int house(vector<int> &a, int n)
	{
		if (n >= a.size())
			return 0;

		if (dp[n] >= 0)
			return dp[n];

		return dp[n] = max(a[n] + house(a, n + 2), house(a, n + 1));
	}

	int rob(vector<int> &nums)
	{

		dp = vector<int>(nums.size(), -1);
		return house(nums, 0);
	}
};