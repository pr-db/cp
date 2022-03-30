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
		ll n = 4;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());

		ll x = -1, y = -1;
		if (a[3] == a[2] + 1)
		{
			long double x1, y1;
			x1 = (a[3] + sqrt(pow(a[3], 2) - 4 * a[2])) / 2;
			y1 = (a[3] - sqrt(pow(a[3], 2) - 4 * a[2])) / 2;

			if ((x1 > 0 && ((long double)x1 == (ll)x1)) && (y1 > 0 && ((long double)y1 == (ll)y1)))
			{
				if (a[0] == x1 - y1)
				{
					if (a[1] == (ll)(x1 / y1))
					{
						x = x1;
						y = y1;
					}
				}
				else if (a[1] == x1 - y1)
				{
					if (a[0] == (ll)(x1 / y1))
					{
						x = x1;
						y = y1;
					}
				}
				else if (a[0] == y1 - x1)
				{
					if (a[1] == (ll)(y1 / x1))
					{
						y = x1;
						x = y1;
					}
				}
				else if (a[1] == y1 - x1)
				{
					if (a[0] == (ll)(y1 / x1))
					{
						y = x1;
						x = y1;
					}
				}
			}
		}
		else
		{
			long double x1, y1;
			x1 = (a[2] + sqrt(pow(a[2], 2) - 4 * a[3])) / 2;
			y1 = (a[2] - sqrt(pow(a[2], 2) - 4 * a[3])) / 2;
			if ((x1 > 0 && ((long double)x1 == (ll)x1)) && (y1 > 0 && ((long double)y1 == (ll)y1)))
			{
				if (a[0] == x1 - y1)
				{
					if (a[1] == (ll)(x1 / y1))
					{
						x = x1;
						y = y1;
					}
				}
				else if (a[1] == x1 - y1)
				{
					if (a[0] == (ll)(x1 / y1))
					{
						x = x1;
						y = y1;
					}
				}
				else if (a[0] == y1 - x1)
				{
					if (a[1] == (ll)(y1 / x1))
					{
						y = x1;
						x = y1;
					}
				}
				else if (a[1] == y1 - x1)
				{
					if (a[0] == (ll)(y1 / x1))
					{
						y = x1;
						x = y1;
					}
				}
			}
		}
		cout << x << " " << y << "\n";
	}
	return 0;
}
