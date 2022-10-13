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
		cin >> n >> k;
		vector<ll> a(n);
		vector<ll> sum(n);
		vector<ll> mx(n);
		ll s = 0;
		ll m = INT_MIN;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			s += a[i];
			m = max(a[i], m);
			mx[i] = m;
			sum[i] = s;
		}
		ll maxx = INT_MIN;
		vector<pair<ll, ll>> q(k);

		for (ll i = 0; i < k; i++)
		{
			cin >> q[i].first;
			q[i].second = i;
		}
		sort(q.begin(), q.end());
		vector<ll> ans(k);

		for (ll i = 0, j = 0; i < k; i++)
		{
			while (j < n && q[i].first >= mx[j])
				j++;
			if (j)
				ans[q[i].second] = sum[j - 1];
			else
				ans[q[i].second] = 0;
		}
		for (ll i = 0; i < k; i++)
			cout << ans[i] << " ";
		cout << "\n";
	}
	return 0;
}
