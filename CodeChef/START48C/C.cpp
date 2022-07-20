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
		ll ans = 0;
		if (n%2)
			ans += m;
		if(m%2)
			ans += n;
		if(n%2&&m%2)
			ans -= 1;
		cout << ans << "\n";
	}
	return 0;
}
