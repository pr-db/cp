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
	ll n, m;
	cin >> n >> m;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	vector<pair<ll, ll>> p(n);
	for (ll i = 1; i < n; i++)
		p[i].first = p[i - 1].first + min((ll)0, a[i] - a[i - 1]);
	for (ll i = n - 1; i > 0; i--)
		p[i-1].second = p[i].second + min((ll)0, a[i - 1] - a[i]);
	
	while(m--)
	{
		ll s, t;
		cin >> s >> t;
		if(s<t)
			cout << abs(p[t - 1].first - p[s - 1].first);
		else
			cout << abs(p[t - 1].second - p[s - 1].second);
		cout << "\n";
	}
	return 0;
}
