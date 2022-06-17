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
		ll a, b;
		cin >> a >> b;
		if (a > b)
		{
			for (ll i = 0; i < a - b; i++)
				cout << 0;
			for (ll i = 0; i < 2 * b; i++)
				if (i % 2)
					cout << 0;
				else
					cout << 1;
		}
		else
		{
			for (ll i = 0; i < b - a; i++)
				cout << 1;
			for (ll i = 0; i < 2 * a; i++)
				if (i % 2)
					cout << 1;
				else
					cout << 0;
		}
		cout << "\n";
	}
	return 0;
}
