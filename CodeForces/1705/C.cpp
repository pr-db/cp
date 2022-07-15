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
		ll n, c, q;
		cin >> n >> c >> q;
		string s;
		cin >> s;
		vector<vector<ll>> a(n);
		for (ll i = 0; i < n; i++)
			a[i].push_back(s[i]);
		ll k = 0;
		for (ll i = 0; i < c; i++)
		{
			ll x, y;
			cin >> x >> y;
			for (ll j = x - 1; j < y; j++)
			{
				a[k].push_back(a[j%n][j/n]);
				if (k < n - 1)
					k++;
				else
					k = 0;
			}
		}
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < a[i].size(); j++)
				cout <<(char)a[i][j]<<" ";
			cout << "\n";
		}
		for (ll i = 0; i < q; i++)
		{
			ll x;
			cin >> x;
			cout << a[x ][i];
		}
				cout << "\n";
	}
	return 0;
}
