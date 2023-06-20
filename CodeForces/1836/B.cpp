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
		ll n, k, g;
		cin >> n >> k >> g;
		ll ans = -1;
		ll aa = (k * g) / n;
		ll bb = (g+1)/2;
		if (n > k * g)// || (k * g) / n < (g + 1) / 2)
			ans = k * g;
		else if (n == 2 || n == 1)
			ans = 0;
		else
		{
			ll temp = ceil(g / 2) - 1;

			temp *= (n - 1);
			temp = min(k * g, temp);
			ll x = k * g - temp;
			ll r = x % g;
			// cout << x << ": ";
			if (r >= ceil(g / 2))
				ans = temp - (g - r);
			else
				ans = temp + r;
		}
		cout << ans;
		cout << "\n";
	}
	return 0;
}
