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
		a.push_back(INT_MIN);
		dp = vector<int>(n + 1, -1);
		return lis(a, 0, n);
	}
	int lis(vector<int> &a, int i, int j)
	{
		if (i == n)
			return 0;
		if (dp[j] >= 0)
			return dp[j];
		int take = 0, donttake = lis(a, i + 1, j);
		if (a[i] > a[j])
			take = lis(a, i + 1, i) + 1;
		return dp[j] = max(take, donttake);
	}
};