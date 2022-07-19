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
		ll n, k = 0;
		cin >> n;
		vector<ll> a(n);
		vector<vector<ll>> c(n,vector<ll>(1));

		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			c[a[i] - 1].push_back(i);
		}
		for (ll i = 0; i < n;i++)
		{
			ll cur = 1;
			for (ll j = 2; j < c[i].size(); j++)
			{
				ll dif = c[i][j] - c[i][j - 1];
				if (dif % 2)
					cur++;
				else 
				{
					if (c[i][0])
						c[i][0]+=cur-1;
					else
						c[i][0] += cur;

					cur = 0;
				}
			}
			c[i][0] += cur - 1;
		}
		for (ll i = 0; i < n; i++)
			cout << c[i][0] << " ";
		cout << "\n";
	}
	return 0;
}
