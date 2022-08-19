#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int maxProduct(vector<int> &a)
	{
		int maxx = 1, ans = INT_MIN;

		for (int u : a)
		{
			maxx *= u;
			ans = max(ans, maxx);
			if (maxx == 0)
				maxx = 1;
		}

		maxx = 1;
		for (int i = a.size() - 1; i >= 0; i--)
		{
			maxx *= a[i];
			ans = max(ans, maxx);
			if (maxx == 0)
				maxx = 1;
		}

		return ans;
	}
};