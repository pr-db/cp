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
		dp = vector<int>(n, 1);
		int ans = 1;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < i; j++)
			{
				if (a[i] > a[j])
					dp[i] = max(dp[i], dp[j] + 1), ans = max(ans, dp[i]);
			}
		return ans;
	}
};