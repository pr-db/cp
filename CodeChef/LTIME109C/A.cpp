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
		ll a, b;
		cin >> a >> b;
		ll fa, fb;
		if (a % 10)
			fa = a / 10 + 1;
		else
			fa = a / 10;

		if (b % 10)
			fb = b / 10 + 1;
		else
			fb = b / 10;

		// cout << fa << " " << fb;
		cout << abs(fa - fb);

		cout << "\n";
	}
	return 0;
}
