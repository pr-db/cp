#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int func(vector<int> &s)
{
	int ans;

	while (s.size() != 2)
	{
		sort(s.rbegin(), s.rend());
		if (s[0] == s[1])
		{
			s.erase(s.begin() + 0);
			s.erase(s.begin() + 1);
		}
		else
		{
			s[0] -= s[1];
			s.erase(s.begin() + 1);
		}
	}
	if (s.size() == 2)
		if (s[0] == s[1])
			return 0;
		else
			return s[0] - s[1];
	else
		return s[0];
}
int main()
{
	int n, k;
	vector<int> a = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};

	n = a.size();
	k = 5;
	int ans = func(a);
	// cout << ans;
	sort(a.rbegin(), a.rend());
	for (int i = 0; i < n;i++)
		cout << a[i] << " ";
		return 0;
}
