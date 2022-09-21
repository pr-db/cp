#include <bits/stdc++.h>
typedef long long ll;
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
		cin >> n >> k;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		ll ans = 0;
		for (ll i = 0; i < k; i++)
		{
			ll mx = a[i];
			ll j = k + i;
			while (j < n)
			{
				mx = max(mx, a[j]);
				j += k;
			}
			ans += mx;
		}
		cout << ans << "\n";
	}
	return 0;
}
