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
		ll n;
		cin >> n;
		if (n == 2)
			cout << -1;
		else
		{
			if (n % 2)
				for (ll i = 1; i <= n; i++)
					cout << i << " ";
			else
			{
				cout << 2 << " " << 3 << " " << 1 << " ";
				for (ll i = 4; i <= n; i++)
					cout << i << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
