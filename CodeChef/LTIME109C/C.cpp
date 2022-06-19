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
		ll a, b, n;
		cin >> a >> b >> n;

		if (a == b)
			cout << 0;
		else
		{
			ll d = pow(2, ll(log2(a ^ b)));
			if (d < n)
			{
				if ((a ^ b) < n)
					cout << 1;
				else
					cout << 2;
			}
			else
				cout << -1;
		}

		cout << "\n";
	}
	return 0;
}
