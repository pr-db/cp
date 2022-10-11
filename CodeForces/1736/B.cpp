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
		ll n, k = 0;
		cin >> n;
		vector<ll> a(n + 2, 1);
		string ans = "YES";
		for (ll i = 1; i <= n; i++)
			cin >> a[i];
		vector<ll> b(n + 1, 1);
		for (int i = 1; i <= n+1; i++)
			b[i-1] = lcm(a[i], a[i - 1]);
		for (int i = 1; i < n + 1; i++)
			if(gcd(b[i],b[i-1])!=a[i])
				ans = "NO";
		cout << ans;
		cout << "\n";
	}
	return 0;
}
