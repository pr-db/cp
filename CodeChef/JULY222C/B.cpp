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
		ll a, b;
		cin >> x >> y >> n >> r;
		b = (r - x * n) / (y - x);
		if (b < 0)
			cout << -1;
		else
		{
			if (b > n)
				b = n;
			a = n - b;
			cout << a << " " << b;
		}
		cout << "\n";
	}
	return 0;
}
