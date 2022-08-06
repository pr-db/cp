#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<vector<int>> dp;
	int longestCommonSubsequence(string s, string t)
	{
		int n = s.size();
		int m = t.size();
		dp = vector<vector<int>>(n, vector<int>(m, -1));
		return lcs(s, t, n - 1, m - 1);
	}
	int lcs(string &s, string &t, int i, int j)
	{
		if (i < 0 || j < 0)
			return 0;
		if (dp[i][j] >= 0)
			return dp[i][j];
		if (s[i] == t[j])
			return dp[i][j] = lcs(s, t, i - 1, j - 1) + 1;
		return dp[i][j] = max(lcs(s, t, i - 1, j), lcs(s, t, i, j - 1));
	}
};