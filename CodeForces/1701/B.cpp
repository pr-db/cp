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
		ll n;
		cin >> n;
		cout << 2<<"\n";
		for (ll i = 1; i <= n; i += 2)
		{
			ll num = i;
			while (num <= n)
			{
				cout << num<<" ";
				num *= 2;
			}
		}
		cout << "\n";
	}
	return 0;
}
