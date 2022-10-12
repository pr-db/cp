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
		ll n, k = 0;
		cin >> n;
		vector<ll> a(n);
		vector<ll> b(n);

		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = i + 1;
		}
		k = 2;
		// reverse(a.begin(), a.begin() + k);
		// reverse(a.begin(), a.begin() + k / 2);
		// reverse(a.begin() + k / 2 , a.begin() + k);
		int ans = 0;
		while (k <= n)
		{
			for (int i = 0; i < n; i += k)
			{
				if (a[i + k / 2] < a[i + k / 2 - 1])
				{
					reverse(a.begin() + i, a.begin() + i + k);
					reverse(a.begin() + i, a.begin() + i + k / 2);
					reverse(a.begin() + i + k / 2, a.begin() + i + k);
					ans++;
				}
			}
			k *= 2;
		}
		if (a == b)
			cout << ans;
		else
			cout << -1;
		// for (ll i = 0; i < n; i++)
		// 	cout << a[i] << " ";
		cout << "\n";
	}
	return 0;
}
