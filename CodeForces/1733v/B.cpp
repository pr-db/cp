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
		ll n, x, y;
		cin >> n >> x >> y;
		vector<ll> ans;
		if (!x && !y)
			ans.push_back(-1);
		else if ((x && y) || ((n - 1) % (x + y)))
			ans.push_back(-1);
		else
		{
			ll z = 2;
			while (z <= n)
			{
				for (ll i = 0; i < x + y; i++)
					ans.push_back(z);
				z += x + y;
			}
		}

		for (ll i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";
		cout << "\n";
	}
	return 0;
}
