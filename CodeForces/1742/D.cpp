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
		vector<ll> a(n);
		map<ll, ll> mp;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]] = i;
		}
		vector<pair<ll, ll>> b;
		for (auto u : mp)
			b.push_back({u.second, u.first});

		sort(b.begin(), b.end());
		ll ans = -1;

		n = b.size();
		for (ll i = n - 1; i >= 0; i--)
		{
			if (ans < 2 * b[i].first + 2)
				if (b[i].second == 1)
					ans = max(ans, 2 * b[i].first + 2);
				else
					for (ll j = i - 1; j >= 0; j--)
					{
						if (__gcd(b[i].second, b[j].second) == 1)
							ans = max(ans, b[i].first + b[j].first + 2);
						// cout << i << "," << j << " ",
					}
		}
		cout << ans;
		cout << "\n";
	}
	return 0;
}
