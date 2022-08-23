#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	map<int, int> count;
	int n;
	vector<int> dp;
	int ans = 0;
	int del(vector<int> &a, int i)
	{
		if (i == a.size())
			return 0;

		if (i == a.size() - 1)
			return a[i] * count[a[i]];

		if (dp[i] != -1)
			return dp[i];

		if (a[i + 1] == a[i] + 1)
			return dp[i] = max(a[i] * count[a[i]] + del(a, i + 2), del(a, i + 1));
		return dp[i] = a[i] * count[a[i]] + del(a, i + 1);
	}
	int deleteAndEarn(vector<int> &nums)
	{
		vector<int> a;
		for (int u : nums)
			count[u]++;
		for (auto u : count)
			a.push_back(u.first);
		n = a.size();
		dp = vector<int>(n, -1);
		return del(a, 0);
	}
};