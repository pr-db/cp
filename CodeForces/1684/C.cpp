#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n, m;
		cin >> n >> m;
		vector<vector<ll>> a(n, vector<ll>(m));
		vector<vector<ll>> b(n, vector<ll>(m));
		for (ll i = 0; i < n; i++)
			for (ll j = 0; j < m; j++)
			{
				ll temp;
				cin >> temp;
				a[i][j] = temp;
				b[i][j] = temp;
			}
		ll i1 = m, i2 = m;
		ll cas = -1;
		for (ll i = 0; i < n; i++)
		{
			ll ti1 = i1, ti2 = i2;
			sort(a[i].begin(), a[i].end());

			for (ll j = 0; j < m; j++)
			{
				if (a[i][j] != b[i][j])
				{
					if (i1 == m)
						i1 = j;
					else if (i2 == m)
						i2 = j;
					else
					{
						i1 = -1;
						i2 = -1;
						break;
					}
				}
			}
			// cout << i1 << " " << i2 << "\n";
			if (ti1 == i1 && ti2 == i2)
			{
				if (i1 == -1 || i2 == -1)
				{
					// cout << "a";
					cas = 0;
					break;
				}
				if (i1 != m && i2 == m)
				{
					// cout << "b";
					cas = 0;
					break;
				}
			}
			else if(i>0)
			{

				// cout << "c";
				cas = 0;
				break;
			}
			else 
				{
					cas = 1;
				}
		}
		// cout << "hi";
		if (cas == -1)
			cout << 1 << " " << 1;
		else if (cas == 0)
			cout << -1;
		else
			cout << i1 << " " << i2;
		cout << "\n";
	}
	return 0;
}
