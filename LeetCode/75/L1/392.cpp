#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool isSubsequence(string s, string t)
{
	int n = t.size(), i = 0, j = 0;
	while (j < s.size(), i < n)
	{
		if (t[i] == s[j])
			j++;
		i++;
	}
	if (j == s.size())
		return 1;
	return 0;
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
