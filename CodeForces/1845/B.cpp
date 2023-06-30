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
		ll xa, ya;
		ll xb, yb;
		ll xc, yc;
		cin >> xa >> ya;
		cin >> xb >> yb;
		cin >> xc >> yc;
		ll a, b, c, d;
		a = min(xb, xc);
		b = max(xb, xc);
		c = min(yc, yb);
		d = max(yc, yb);

		ll ans = 0;
		if(xa<a||xa>b)
			ans += min(abs(xa - a), abs(xa - b));
		if (ya<c||ya>d)
			ans += min(abs(ya - c), abs(ya - d));
		cout << ans+1;
		cout << "\n";
	}
	return 0;
}
