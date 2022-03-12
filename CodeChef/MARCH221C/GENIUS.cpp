#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, x;
		cin >> n >> x;
		ll a, b, c;
		a = (x + n) / 4;
		b = 3 * a - x;
		c = n - (a + b);
		if (a >= 0 && b >= 0 && c >= 0)
		{
			cout << "YES"
				 << "\n";
			cout << a << " " << b << " " << c << "\n";
		}
		else
			cout << "NO"
				 << "\n";
	}
	return 0;
}
