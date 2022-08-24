// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/discuss/75928/Share-my-DP-solution-(By-State-Machine-Thinking)

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int maxProfit(vector<int> &prices)
	{
		int n = prices.size();
		if (n < 2)
			return 0;
		int justbought = -prices[0];
		int justsold = 0;
		int rest = 0;

		for (int i = 1; i < n; i++)
		{
			int lastsold = justsold;
			justsold = justbought + prices[i];
			justbought = max(justbought, rest - prices[i]);
			rest = max(rest, lastsold);
		}
		return max(rest, justsold);
	}
};