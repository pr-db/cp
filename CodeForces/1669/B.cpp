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
		ll c = 0;
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		map<ll, ll> mp;
		for (ll i = 0; i < n; i++)
		{
			mp[a[i]]++;
			if (mp[a[i]] >= 3)
			{
				cout << a[i];
				c = 1;
				break;
			}
		}
		if (c == 0)
			cout << -1;
		cout << "\n";
	}
	return 0;
}
