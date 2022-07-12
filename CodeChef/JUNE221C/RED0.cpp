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
		double m = min(x, y), n = max(x, y);
		if (m == n)
			cout << max(x, y);
		else if (m >= n / 2)
			cout << max(x, y)+1;
		else if (m < n / 2)
			if (double(n / m) <= 4)
				cout << max(x, y)+2;
			else
			{
				ll div = log2(n/m);
				cout << max(x, y)+1+div;
			}
		cout << "\n";
	}
	return 0;
}
