#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int getMaxLen(vector<int> &a)
	{

		int neg = -1, negcount = 0, zero = -1, ans = 0;

		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] < 0)
			{
				negcount++;
				if (neg == -1)
					neg = i;
			}
			if (a[i] == 0)
			{
				zero = i;
				neg = -1;
				negcount = 0;
			}
			else
			{
				if (negcount % 2)
					ans = max(ans, i - neg);
				else
					ans = max(ans, i - zero);
			}
		}
		return ans;
	}
};