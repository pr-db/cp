#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, s;
		cin >> n >> s;
		ll maxs = (n - 1) * (n + 1);
		ll ans = s/(n*n);
		cout << ans << "\n";
	}
	return 0;
}
