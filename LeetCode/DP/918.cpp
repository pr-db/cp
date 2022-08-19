#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<int> dp;
	int ans = INT_MIN;
	int n;
	int solve(vector<int> &a, int i)
	{
		if (i < 0)
			return 0;
		dp[i] = max(0, solve(a, i - 1));
		ans = max(ans, dp[i] += a[i]);
		return dp[i];
	}

	int maxSubarraySumCircular(vector<int> &a)
	{
		dp = vector<int>(a.size(), -1);
		n = a.size();
		solve(a, a.size() - 1);
		int kad_ans = ans;

		if (ans < 0)
			return ans;
		ans = INT_MIN;

		dp = vector<int>(a.size(), -1);
		int sum = 0;

		for (int i = 0; i < n; i++)
		{
			sum += a[i];
			a[i] *= -1;
		}

		solve(a, n - 1);
		ans = sum + ans;

		return max(ans, kad_ans);
	}
};