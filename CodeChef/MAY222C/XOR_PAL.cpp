#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
int main()
{
	FastIO;
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		string s;
		cin >> s;
		ll c0 = 0, c1 = 0;
		for (ll i = 0; i < n / 2; i++)
		{
			if (s[i] != s[n - i - 1])
				if (s[i] == 0)
					c0++;
				else
					c1++;
		}
		ll ans = 0;
		ans += c0;
		ans += (c1 + 1) / 2;
		cout << ans << "\n";
	}
	return 0;
}
