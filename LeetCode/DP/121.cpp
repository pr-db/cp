#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int maxProfit(vector<int> &a)
	{
		int mn = INT_MAX;
		int ans = 0;
		for (int i = 0; i < a.size(); i++)
		{
			mn = min(a[i], mn);
			ans = max(ans, a[i] - mn);
		}
		return ans;
	}
};