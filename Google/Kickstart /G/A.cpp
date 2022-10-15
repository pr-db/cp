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
	ll k = 1;

	while (t--)
	{
		ll m, n, p;
		cin >> m >> n >> p;
		vector<vector<ll>> a(m, vector<ll>(n));
		for (ll i = 0; i < m; i++)
			for (ll j = 0; j < n; j++)
				cin >> a[i][j];

		ll ans = 0;
		for (ll j = 0; j < n; j++)
		{
			ll temp = 0;
			for (ll i = 0; i < m; i++)
				temp = max(temp, a[i][j]);
			ans += max(ll(0), temp - a[p - 1][j]);
		}
		cout << "Case #" << k++ << ": " << ans << "\n";
	}
	return 0;
}
