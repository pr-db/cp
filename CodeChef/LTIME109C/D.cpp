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
		ll n, k = 0;
		cin >> n;
		vector<ll> a(n);
		vector<ll> b;

		for (ll i = 0; i < n; i++)
			cin >> a[i];

		ll mx = INT64_MIN;
		for (ll ind = 0; ind < n; ind++)
		{
			vector<ll> c = a;
			b = vector<ll>(n);
			map<ll, ll> mp;
			rotate(c.begin(), c.begin() + c.size() - ind, c.end());

			b[0] = c[0];
			mp[b[0]]++;

			for (ll i = 1; i < n; i++)
			{
				b[i] = (c[i] ^ b[i - 1]);
				mp[b[i]]++;
			}
			mx = max(mx, ll(mp.size()));
			// cout << mp.size() << "\n";
		}
		cout << mx;
		cout << "\n";
	}
	return 0;
}
