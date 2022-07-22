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
		ll x;
		vector<ll> a(3);
		cin >> x;
		ll px = x;

		for (int i = 0; i < 3; i++)
			cin >> a[i];

		int y = 0;
		for (int i = 0; i < 3; i++)
		{
			px = x;
			if (px - 1 < 0)
				break;
			x = a[px - 1];
			a[px - 1] = -1;
		}
		for (int i = 0; i < 3; i++)
			if (a[i] == -1)
				y++;
		if (y != 3)
			cout << "NO";
		else
			cout << "YES";

		cout << "\n";
	}
	return 0;
}
