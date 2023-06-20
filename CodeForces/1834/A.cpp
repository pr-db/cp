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
	// FastIO;
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k = 0;
		cin >> n;
		vector<ll> a(n);
		int cn = 0, cp = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] < 0)
				cn++;
			else
				cp++;
		}
		// cout << cn << " " << cp << ":: ";

		int ans = 0;
		if (cp >= cn)
			if (cn % 2)
				cout << 1;
			else
				cout << 0;
		else if ((cn - cp) % 2 == 0)
		{
			ans += (cn - cp) / 2;
			cn -= (cn - cp) / 2;
			// cp += (cn - cp) / 2;
			if (cn % 2)
				cout << ans + 1;
			else
				cout << ans;
		}
		else
		{
			ans += (cn - cp) / 2 + 1;
			cn -= (cn - cp) / 2 + 1;
			// cp += (cn - cp) / 2;
			if (cn % 2)
				cout << ans + 1;
			else
				cout << ans;
		}
		cout << "\n";
	}
	return 0;
}
