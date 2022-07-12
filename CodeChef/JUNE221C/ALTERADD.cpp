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

		if ((y - x) % 3 == 2)
			cout << "NO";
		else
			cout << "YES";

		cout << "\n";
	}
	return 0;
}
