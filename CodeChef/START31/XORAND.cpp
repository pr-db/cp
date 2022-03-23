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
		vector<pair<ll, ll>> ct;
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		cout << "\n";
		ct.push_back(make_pair(ll(log2(a[0])), 1));
		for (ll i = 1; i < n; i++)
			if (ll(log2(a[i])) == ll(ct[ct.size() - 1].first))
				ct[ct.size() - 1].second++;
			else
				ct.push_back(make_pair(ll(log2(a[i])), 1));
		ll ans = 0;
		for (ll i = 0; i < ct.size(); i++)
			ans += ((ct[i].second) * (ct[i].second - 1) / 2);

		cout << ans << "\n";
	}
	return 0;
}
