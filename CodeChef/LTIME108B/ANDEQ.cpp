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
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];

		ll c = 1, mxc = 1, mxe;
		sort(a.begin(), a.end());
		for (ll i = 1; i < n; i++)
		{
			ll pmxc = mxc;
			if (a[i] == a[i - 1])
				c++;
			mxc = max(c, mxc);
			if (mxc > pmxc)
				mxe = a[i - 1];
		}
		vector<ll> b(31);
		for (ll i = 0; i < n; i++)
		{
			ll bt = log2(a[i]) + 1;
			b[bt]++;
		}

		ll ans = 0;
		for (ll i = 0; i < 31; i++)
			ans += b[i];
		cout << ans;
		cout << "\n";
	}
	return 0;
}
