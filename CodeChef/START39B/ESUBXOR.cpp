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
		ll n;
		cin >> n;
		vector<ll> a(n);
		vector<ll> b(n);

		a[0] = 2;
		for (ll i = 1; i < n; i++)
			a[i] = a[i - 1] + 1;

		if (n % 2)
			b[0] = a[n - 1] + 2;
		else
			b[0] = a[n - 1] + 1;
		for (ll i = 1; i < n; i++)
			b[i] = b[i - 1] + 1;

		for (ll i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << "\n";
		for (ll i = 0; i < n; i++)
			cout << b[i] << " ";
		cout << "\n";

		// cout << "\n";
		// ll xra = 0, xrb = 0;
		// for (ll i = 0; i < n; i++)
		// {
		// 	xra ^= a[i];
		// 	cout << xra << " ";
		// }
		// cout << "\n";
		// for (ll i = 0; i < n; i++)
		// {
		// 	xrb ^= b[i];
		// 	cout << xrb << " ";
		// }
		// cout << "\n";
	}
	return 0;
}
