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
		vector<ll> m(n+1);
		for (ll i = 0; i < n; i++)
		{
			ll p = 0, s = 0, e = 0;

			if (i - a[i] + 1 >= 0)
				s = i - a[i] + 1;
			else
				s = 0;
			if (m[a[i]] && m[a[i]] + 1 >= s)
				s = m[a[i]] + 1;

			if (s + a[i] - 1 >= n)
				e = n-1;
			else
				e = s + a[i] - 1;

			if (e - s + 1 != a[i])
				continue;
			p = min(i - s + 1, n - e);

			m[a[i]] = i;
			k += p;
		}
		cout << k << "\n";
	}
	return 0;
}
