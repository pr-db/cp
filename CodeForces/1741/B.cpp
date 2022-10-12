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
		int j = 1;
		for (ll i = n / 2; i < n; i++)
			a[i] = j++;
		for (ll i = 0; i < n / 2; i++)
			a[i] = j++;
		if (n == 3)
			cout << -1;
		else
			for (ll i = 0; i < n; i++)
				cout << a[i] << " ";
		cout << "\n";
	}
	return 0;
}
