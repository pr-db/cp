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
		map<ll, ll> m;
		vector<ll> v(n + 1);
		for (ll i = 0; i < n; i++)
		{
			ll p = 0;
			if (v[a[i]] == 0)
			{
				m[a[i]] = i;
				v[a[i]]++;
				if (i - a[i] + 1 >= 0)
					if (i + a[i] <= n)
						p = a[i];
					else
						p = n - i;
				else
				{
					if (i + a[i] <= n)
						p = i + 1;
					else
						p = n - a[i] + 1;
				}
			}
			else
			{
				if (i - a[i] + 1 >= 0)
					if (i + a[i] <= n)
						p = min(a[i], i - m[a[i]]);
					else
					{
						if (i - m[a[i]] >= a[i])
							p = n - i;
						else
						{
							p = n - m[a[i]] - a[i];
							if (p < 0)
								p = 0;
						}
					}
				else
				{
					if (i + a[i] <= n)
						p = min(a[i], i - m[a[i]]);
					else
					{
						if (i - m[a[i]] >= a[i])
							p = n - i;
						else
						{
							p = n - m[a[i]] - a[i];
							if (p < 0)
								p = 0;
						}
					}
				}

				m[a[i]] = i;
				v[a[i]]++;
			}
			// cout << p << ", ";
			k += p;
		}
		cout << k << "\n";
	}
	return 0;
}
