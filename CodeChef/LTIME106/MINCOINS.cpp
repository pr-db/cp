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
		ll n, tn, fn;
		cin >> n;
		if (n % 5)
			cout << -1;
		else
		{
			tn = (n / 10);
			n -= tn * 10;
			fn = n / 5;
			cout << fn + tn;
		}
		cout << "\n";
	}
	return 0;
}
