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
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		ll c = 0;
		for (ll i = 0; i < n; i++)
		{
			if (a[i] < 0 && k == 0)
				c++, k = 1;
			else if (a[i] == 0 && k == 1)
				k = 1;
			else if (a[i] < 0)
				k = 1;
			else
				k = 0;
		}
		ll sum = 0;
		for (ll i = 0; i < n; i++)
			sum += abs(a[i]);
		cout << sum << " ";
		cout << c;
		cout << "\n";
	}
	return 0;
}
