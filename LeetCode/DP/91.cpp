#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int numDecodings(string s)
	{
		int n = s.size();
		vector<int> dp(n);
		for (int i = 0; i < n; i++)
			s[i] -= '0';
		if (s[0])
			dp[0] = 1;
		else
			return 0;

		if (n == 1)
			return 1;

		if (s[1])
			if (s[0] * 10 + s[1] < 27)
				dp[1] = 2;
			else
				dp[1] = 1;
		else if (s[0] * 10 + s[1] < 27)
			dp[1] = 1;
		else
			return 0;

		for (int i = 2; i < s.size(); i++)
		{

			if (s[i - 1] && s[i])
				if (s[i - 1] * 10 + s[i] < 27)
					dp[i] += dp[i - 2] + dp[i - 1];
				else
					dp[i] += dp[i - 1];
			else if (s[i])
				dp[i] += dp[i - 1];
			else if (s[i - 1] && s[i - 1] * 10 + s[i] < 27)
				dp[i] += dp[i - 2];
			else
				return 0;
		}
		return dp[n - 1];
	}
};