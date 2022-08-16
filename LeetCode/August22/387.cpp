#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int firstUniqChar(string s)
	{
		vector<int> a(26);
		for (int i = 0; i < s.size(); i++)
			if (!a[s[i] - 'a'])
				a[s[i] - 'a'] = i + 1;
			else
				a[s[i] - 'a'] = INT_MAX;

		int mn = INT_MAX;
		for (int i = 0; i < 26; i++)
			if (a[i] > 0)
				mn = min(mn, a[i]);
		if (mn != INT_MAX)
			return mn - 1;
		return -1;
	}
};