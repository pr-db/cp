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

		for (ll i = 1; i < n; i++)
		{
			if (a[i] % a[0])
			{
				k = 1;
				break;
			}
		}

		if (k)
			cout << "NO";
		else
			cout << "YES";
		cout
			<< "\n";
	}
	return 0;
}
