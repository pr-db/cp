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
		ll n, m;
		cin >> n >> m;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];

		sort(a.begin(), a.end());
		ll ans = 0;
		// cout << a[n - 1] << " " << a[n - 2];
		ll i1 = n - 1, i2 = n - 2;
		if (a[i2] == a[i1])
		{
			while (i2 >= 0 && a[i2] == a[i1])
				i2--;
		}
		ll md1 = (a[i2] - a[i1]) % m;
		if (md1 < 0)
			md1 += m;
		ll md2 = (a[i1] - a[i2]) % m;

		ll a1 = 2 * a[i1];
		ll a2 = a[i2] + a[i1] + md1;
		ll a3 = a[i2] + a[i1] + md2;
		ans = max(a1, a2);
		ans = max(ans, a3);
		cout << ans;
		cout << "\n";
		// cout << -10 % 3;
	}
	return 0;
}
