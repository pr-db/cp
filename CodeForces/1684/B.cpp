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
		ll a, b, c;
		cin >> a >> b >> c;
		ll x, y, z;
		z = c;
		for (ll q = 0;; q++)
		{
			y = q * c + b;
			x = y + a;
			if (z % x == c)
				break;
		}
		cout << x <<" "<<y<<" "<<z;

		cout << "\n";
	}
	return 0;
}
