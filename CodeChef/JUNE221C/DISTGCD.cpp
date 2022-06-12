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
		ll x, y;
		cin >> x >> y;
		ll z = abs(y - x);
		ll ans = 0;
		for (ll i = 1; i <= sqrt(z); i++)
			if (z % i == 0)
				if (i != z / i)
				{
					ans += 2;
					// cout << i << " " << z / i << " ";
				}
				else
				{
					ans++;
					// cout << i << " ";
				}

		cout << ans << "\n";
	}
	return 0;
}
