#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
#define nl cout << "\n";
int main()
{
	FastIO;
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k = 0;
		cin >> n;
		string s;
		int ct = 0;
		string ans;
		cin >> s;
		for (int i = 0; i < n; i++)
			if (!(s[i] - '0'))
				ct++;
		for (int i = 0; i < ct; i++)
		{
			ans += '0';
		}
		for (int i = ct; i < n; i++)
		{
			ans += '1';
		}
		if(n==2)
			ans = s;
		cout << ans;
		cout << "\n";
	}
	return 0;
}
