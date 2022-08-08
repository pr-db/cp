#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	int lengthOfLongestSubstring(string s)
	{
		vector<int> a(256, -1);
		int ind = -1;
		int ans = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (a[s[i]] > ind)
				ind = a[s[i]];
			a[s[i]] = i;
			ans = max(ans, i - ind);
		}
		return ans;
	}
};