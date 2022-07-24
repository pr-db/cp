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
		ll x, y, r, n;
		cin >> x >> y >> n >> r;
		if (x * n > r)
			cout << -1;
		else
		{
			ll a = n;
			ll b = 0;
			while (a >= 0 && b >= 0 && a * x + b * y <= r)
				a--, b++;
			cout << a + 1 << " " << b - 1;
		}

		cout << "\n";
	}
	return 0;
}
