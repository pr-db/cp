#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

// 1 2 3 4 5
// 1 1 1 1 1
// 1 1 1 1 5
// 1 1 3 3 5
// 2 2 1
// 2 1 1 1
// 1 1 3 4 5

// 1 2 3 4 5 6 7 8
//
// 1 2 3 4 5
//  1 1 4 4

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, x, y;
		cin >> n >> x >> y;

		if (x != 0 && y != 0)
		{
			cout << -1 << "\n";
		}
		else
		{
			ll k = 0;
			ll c = 0;
			if (x != 0)
			{
				k = x;
				c = x;
			}
			else
			{
				k = y;
				c = y;
			}
			cout << k << " ";
			bool flag = false;
			// while (k <= n - 1)
			// {
			// 	if ((n - 1) % k == 0)
			// 	{
			// 		ll f = 1;
			// 		ll sum = 1;
			// 		ll m = (n - 1) / k;
			// 		for (ll i = 2; i <= n; i++)
			// 		{
			// 			if (sum == m)
			// 			{
			// 				f = i;
			// 				sum = 1;
			// 			}
			// 			cout << f << " ";
			// 			sum += 1;
			// 		}
			// 	}
			// 	k += c;
			// }
			if (!flag)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << "\n";
			}
		}
	}

	return 0;
}