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
		ll n, k;
		cin >> n;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		ll temp = pow(2, 32) - 1;
		ll ans = 0;
		for (ll i = 0; i < n; i++)
		{
			temp &= a[i];
			if (temp == 0)
			{
				ans++;
				temp = pow(2, 32) - 1;
			}
		}
		if (ans == 0)
		{
			ans = 1;
		}
		cout << ans;
		cout << "\n";
	}
	return 0;
}
