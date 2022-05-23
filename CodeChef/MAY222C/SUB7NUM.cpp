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
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		pair<ll, ll> p[10];
		for (ll i = 0; i < 10;i++)
		{
			p[i].first =i;
			p[i].second = ((i + 1) * 7) % 10;
		}
		vector<pair<ll, ll>> b(n);
		

		cout << "\n";
	}
	return 0;
}
