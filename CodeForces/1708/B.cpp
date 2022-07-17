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
		ll n, l, r;
		cin >> n >> l >> r;
		ll k = 0;
		if (n > (r - l + 1))
		{
			cout << "NO";
			nl;
			continue;
		}
		vector<ll> a(n);
		map<ll, ll> m;
		for (ll i = n; i > 0; i--)
		{
			a[i - 1] = (l / i) * i;
			if (a[i - 1] < l)
				a[i - 1] += i;

			while (m[a[i - 1]])
				a[i - 1] += i;
			if (a[i - 1] > r)
			{
				k = 1;
				break;
			}
			m[a[i - 1]]++;
		}
		if (k)
			cout << "NO";
		else
		{
			cout << "YES";
			nl;
			for (ll i = 0; i < n; i++)
				cout << a[i] << " ";
		}
		nl;
	}
	return 0;
}
