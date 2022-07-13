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
		ll n;
		cin >> n;
		ll a[n][n];
		for (ll i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			for (ll j = 0; j < n; j++)
				a[i][j] = s[j] - '0';
		}
		ll ans = 0;
		if (n % 2)
		{
			for (ll j = 0; j < n / 2; j++)
			{
				ll c = 0, d = 0;
				if (a[n / 2][j])
					c++;
				else
					d++;
				if (a[n / 2][n - 1 - j])
					c++;
				else
					d++;
				if (a[j][n / 2])
					c++;
				else
					d++;
				if (a[n - 1 - j][n / 2])
					c++;
				else
					d++;

				ans += min(c, d);
			}
		}

		for (ll i = 0; i < n / 2; i++)
		{
			for (ll j = 0; j < n / 2; j++)
			{
				ll c = 0, d = 0;
				ll x = i, y = j, z;

				for (ll k = 0; k < 4; k++)
				{
					// cout << x<< y << " ";
					if (a[x][y] % 2)
						c++;
					else
						d++;
					z = y;
					y = n - 1 - x;
					x = z;
				}
				ans += min(c, d);
			}
		}
		cout << ans;
		nl;
	}
	return 0;
}
