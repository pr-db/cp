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
		ll n, m;
		cin >> n >> m;
		ll a=n, b=m;
		ll r = -1,r2;
		for (ll i = n; i <= min(m, 2 * n); i++)
		{
			r2 = m - m % i - i ;
			if(r2>r)
			{
				r = r2;
				a = i;
				b = m - m % i;
			}
		}
		cout << a << " " << b;
		cout << "\n";
	}
	return 0;
}
