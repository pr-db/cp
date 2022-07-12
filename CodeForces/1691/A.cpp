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
		{
			cin >> a[i];
			if (a[i] % 2)
				k++;
		}

		cout << min(k, n - k) << "\n";
	}
	return 0;
}
