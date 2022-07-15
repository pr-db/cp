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
		vector<string> a(c + 1);
		a[0] = s;
		ll k = 0;
		for (ll i = 0; i < c; i++)
		{
			k++;
			ll x, y;
			cin >> x >> y;
			if (y < n)
				a[k] = s.substr(x - 1, y - x + 1);
			else
			{
				ll siz = y - x + 1;
				ll ind = 0;
				ll st = a[ind].size();
				while (x > st)
					st += a[++ind].size();
				ll sp = x - 1 - st + a[ind].size();
				a[k] += a[ind].substr(sp, min(st - sp, siz));
				siz -= (st - sp);
				sp = 0;
				while (siz > 0)
				{
					a[k] += a[++ind].substr(sp, min(st - sp, siz));
					siz -= (st - sp);
				}
			}
		}
		// for (ll i = 0; i < c + 1; i++)
		// {
		// 	cout << a[i];
		// 	cout << "\n";
		// }
		for (ll i = 0; i < q; i++)
		{
			ll x;
			cin >> x;
			x--;
			ll k = 0;
			ll st = a[k].size();
			while (st <= x)
				st += a[++k].size();
			// cout << x << " " << k << " " << x - st + a[k].size();
			cout << a[k][x-st+a[k].size()] << "\n";
		}
		// cout << "\n";
	}
	return 0;
}
