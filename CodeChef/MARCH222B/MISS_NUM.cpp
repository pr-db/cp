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
		cout << "\n";
		sort(a.begin(), a.end());

		ll l = 0, r = 10020, m;
		ll x = -1, y = -1;
		if (a[3] == a[2]+1)
		{
			if (a[0] == 1-a[2] || a[0] == a[2]-1)
			{
				if (a[1] == (ll)(a[2]))
				{
					y = 1;
					x = a[2];
				}
				else if(a[1]==(ll)(1/a[2]))
				{
					x = 1;
					y = a[2];
				}
			}
			else if (a[1] == 1 - a[2] || a[1] == a[2] - 1)
			{
				if (a[0] == (ll)(a[2]))
				{
					y = 1;
					x = a[2];
				}
				else if (a[0] == (ll)(1 / a[2]))
				{
					x = 1;
					y = a[2];
				}
			}
		}
		else
		{
			ll i;
			for (i = 2; i < 10020; i++)
			{
				l = 1;
				r = 10020;
				while (l + 1 < r)
				{
					m = l + (r - l) / 2;
					if (m * i < a[3])
						l = m;
					else
						r = m;
				}
				if (a[2] == l + 1+i)
				{
					if (a[0] == i-1 - l || a[0] == l+1-i)
					{
						if (a[1] == (ll)((l + 1)/i))
						{
							y = i;
							x = l + 1;
							break;
						}
						else if (a[1] == (ll)( i/(l+1)))
						{
							x = i;
							y = l + 1;
							break;
						}
					}
					else if (a[1] == i-1 - l || a[1] == l+1-i)
					{
						if (a[1] == (ll)((l + 1) / i))
						{
							y = i;
							x = l + 1;
							break;
						}
						else if (a[1] == (ll)(i / (l + 1)))
						{
							x = i;
							y = l + 1;
							break;
						}
					}
				}
			}
		}
		cout << x << " " << y << "\n";
	}
	return 0;
}
