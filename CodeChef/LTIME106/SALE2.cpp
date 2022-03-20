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
		ll n, k ;
		cin >> n>>k;
		cout << ((n / 3) * 2 * k + (n % 3) * k)<<"\n";
	}
	return 0;
}
