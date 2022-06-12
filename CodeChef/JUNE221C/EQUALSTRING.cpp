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
		ll n;
		cin >> n;
		string x, y;
		cin >> x >> y;
		vector<ll> a(26);
		for (ll i = 0; i < n; i++)
			if(x[i]!=y[i])
				a[y[i] - 97]++;
		ll ans = 0;
		for (ll i = 0; i < 26; i++)
			if(a[i])
				ans++;
		cout << ans;
		cout << "\n";
	}
	return 0;
}
