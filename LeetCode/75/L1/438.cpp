#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution
{
public:
	vector<int> findAnagrams(string s, string p)
	{
		vector<int> a(26);
		vector<int> b(26);
		vector<int> ans;
		for (int i = 0; i < p.size(); i++)
			a[p[i] - 'a']++;
		int l = 0, r = 0;
		while (l < s.size())
			if (a[s[l] - 'a'])
				break;
			else
				l++;
		cout << l;
		if (l + p.size() > s.size())
			return ans;
		r = l;
		while (r < l + p.size())
			b[s[r++] - 'a']++;

		r--;
		cout << " hi ";
		cout << r;
		while (r < s.size())
		{
			if (a == b)
				ans.push_back(l);
			r++;
			if (r < s.size())
				b[s[r] - 'a']++;

			b[s[l++] - 'a']--;
		}
		return ans;
	}
};