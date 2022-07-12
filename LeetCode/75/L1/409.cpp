#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int longestPalindrome(string s)
{
	vector<int> mp(52);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a')
			mp[s[i] - 'a']++;
		else
			mp[s[i] - 'A' + 26]++;
	}
	int ct = 0, ans = 0;
	for (int i = 0; i < 52; i++)
		if (mp[i] % 2)
		{
			ans += mp[i] - 1;
			ct++;
		}
		else
			ans += mp[i];
	if (ct)
		return ans + 1;
	else
		return ans;
}
int main()
{
	int n;
	vector<int> a = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
	n = a.size();
	// int ans = func(a);
	// cout << ans;
	return 0;
}
