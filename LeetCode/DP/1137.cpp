#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<int> dp;

	int solve(int n)
	{
		if (!n)
			return 0;
		if (n == 1 || n == 2)
			return 1;

		if (dp[n])
			return dp[n];

		return dp[n] = solve(n - 1) + solve(n - 2) + solve(n - 3);
	}
	int tribonacci(int n)
	{
		dp = vector<int>(n + 1);
		return solve(n);
	}
};