#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	int n;
	int lengthOfLIS(vector<int> &a)
	{
		n = a.size();
		int ans = 0;
		for (int i = 1; i < n; i++)
		{
			if (a[i] > a[ans])
				a[++ans] = a[i];
			else
				*lower_bound(begin(a), begin(a) + ans, a[i]) = a[i];
			cout << ans << " ";
		}
		return ans + 1;
	}
};