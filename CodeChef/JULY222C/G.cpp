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
	ll mod = 998244353;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vector<ll> a(n);
		ll c = 0;
		ll ans = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i])
				c++;
		}
		if(n-c)
		{
			for (ll i = 0; i < n - c;i++)
			{
				
			}
		}
		else 
			ans += (c * (c + 1) / 2);
		cout << ans%mod;
		cout << "\n";
	}
	return 0;
}
