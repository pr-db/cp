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
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end(), greater<ll>());
		// for (ll i = 0; i < n; i++)
			// cout << a[i] << " ";
		// cout << "\n";
		ll c = 0;
		if (n == 1 && a[0] == 1)
			c = 1;
		for (ll i = 1; i < n; i++)
		{
			if (a[i - 1] == a[i] || a[i - 1] == a[i] + 1 || a[i - 1] == 1 )
			{
				c = 1;
				break;
			}
			else
				break;
		}

		if (c == 1)
			cout << "YES";
		else
			cout << "NO";
		cout << "\n";
	}
	return 0;
}
