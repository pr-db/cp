#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	string longestCommonPrefix(vector<string> &s)
	{
		int n = s.size();
		string ans;
		int k = 0;
		while (k >= 0)
		{
			if (k >= s[0].size())
				break;
			char c = s[0][k];
			for (int i = 1; i < n; i++)
				if (k >= s[i].size() || s[i][k] != c)
				{
					k = -1;
					break;
				}
			if (k++ >= 0)
				ans += c;
			else
				break;
		}
		return ans;
	}
};