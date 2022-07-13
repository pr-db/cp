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
		ll n;
		cin >> n;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		for (ll i = 0; i < n; i++)
		{
			ll k;
			cin >> k;
			string s;
			cin >> s;
			ll ct = 0;
			for (ll i = 0; i < k; i++)
				if (s[i] == 'D')
					ct++;
				else
					ct--;
			a[i] += ct;
			if (a[i] < 0)
				a[i] += 10;
			a[i] %= 10;
		}
		for (ll i = 0; i < n; i++)
			cout << a[i] << " ";
		nl;
	}
	return 0;
}
