#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin >> t;

	while (t--)
	{
		ll m, n, p;
		cin >> m >> n >> p;

		vector<ll> maxii(n, 0);
		vector<ll> jn(n, 0);
		for (ll i = 0; i < m; i++)
		{
			if (i == p - 1)
			{
				for (ll j = 0; j < n; j++)
				{
					cin >> jn[j];
				}
			}
			else
			{
				for (ll j = 0; j < n; j++)
				{
					ll cnt;
					cin >> cnt;
					maxii[j] = max(maxii[j], cnt);
				}
			}
		}

		ll ans = 0;
		for (ll i = 0; i < n; i++)
		{
			ans += max(ll(0), maxii[i] - jn[i]);
		}

		cout << "Case #" << tc << ": " << ans << "\n";

		tc += 1;
	}

	return 0;
}