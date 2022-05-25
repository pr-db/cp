#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vector<ll> a(n);
		vector<ll> b;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] != i)
				b.push_back(a[i]);
		}
		ll ans = b[0];
		for (ll i = 1; i < b.size(); i++)
			ans &= b[i];

		cout << ans << "\n";
	}
	return 0;
}
