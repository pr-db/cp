#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool predicate(ll a[], ll m, ll x)
{
	if (a[m] >= x)
		return true;
	return false;
}
ll countTriplets(ll a[], ll n, ll x)
{
	ll ans=0;
	sort(a, a + n);
	for (ll i = 0; i < n; i++)
	{
		for (ll j = i + 1; j < n; j++)
		{
			ll num = x - a[i] - a[j];
			ll l = j, r = n, m;
			while (l + 1 < r)
			{
				m = l + (r - l) / 2;
				if (predicate(a, m, num))
					r = m;
				else
					l = m;
			}
			cout << l<<"\n";
			ans += l - j;
		}
	}
	return ans;
}
int main()
{
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for (ll i = 0; i < n;i++)
		cin >> a[i];
	ll ans = countTriplets(a, n, k);
	cout << ans<<"<---";
	return 0;
}