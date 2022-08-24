#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int maxProfit(vector<int> &prices, int fee)
	{
		int n = prices.size();
		int ans = 0;
		if (n < 2)
			return 0;
		int bought = -prices[0], sold = 0;

		for (int i = 1; i < n; i++)
		{
			int last = bought;
			bought = max(last, sold - prices[i]);
			sold = max(last + prices[i] - fee, sold);
		}
		return sold;
	}
};