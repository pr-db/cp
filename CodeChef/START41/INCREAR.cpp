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

		ll ans = 0;
		if (x == y)
			ans = 0;
		else if (x > y)
		{
			ans += (x - y) / 2;

			if ((x - y) % 2)
				ans += 2;
		}
		else
			ans += (y - x);

		cout << ans << "\n";
	}
	return 0;
}
