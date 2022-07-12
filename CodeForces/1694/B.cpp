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
		ll n;
		cin >> n;
		string s;
		cin >> s;
		ll ans = 0;
		ll ct = 0, ct1 = 0;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			if (s[i] == '0')
				ct++;
			else
			{
				if (ct)
					a[i] = 1;
				ct = 0;
			}

		for (ll i = 0; i < n; i++)
			if (!a[i])
				ans++;

		for (ll i = 0; i < n; i++)
		{
			ll tmp = 0;
			if (s[i] == '1' && (a[i]))
			{
				tmp += i + 1;
				if (i + 1 < n && s[i + 1] == '0')
					tmp *= 2;
			}
			ans += tmp;
			// cout << tmp << " ";
		}

		// for (ll i = 0; i < n; i++)
		// 	cout << a[i] << " ";
		// cout << ans << " ";
		ct = 0;
		for (ll i = 0; i < n; i++)
			if (s[i] == '1')
				ct++;
			else
			{
				// cout << ct << " ";
				if (ct > 1 or i == 1)
					ans += ct;
				ct = 0;
			}
		cout << ans;

		cout << "\n";
	}
	return 0;
}
