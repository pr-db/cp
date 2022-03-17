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
		ll n, x,k;
		cin >> n>>x>>k;
		ll ans = ((k / x) / n) * n;
		cout << ans << "\n";
	}
	return 0;
}
