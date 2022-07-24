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
		if (a % b == 0)
			cout << -1;
		else
		{
			if (n % a)
				n += (a - n % a);
			while (n % b == 0)
				n += a;
			cout << n;
		}
		cout << "\n";
	}
	return 0;
}
