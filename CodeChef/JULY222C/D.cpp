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
		ll ct = 0;
		ll ans = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i])
				ct++;
			else
			{
				ans += (ct * (ct + 1) / 2);
				ct = 0;
			}
		}
		ans += (ct * (ct + 1) / 2);
		cout << ans;
		cout << "\n";
	}
	return 0;
}
