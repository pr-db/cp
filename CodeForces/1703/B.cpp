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
		string s;
		ll n;
		cin >> n;
		cin >> s;
		vector<ll> v(26);
		ll ans = 0;
		for (ll i = 0; i < n; i++)
			v[s[i] - 65]++;
		for (ll i = 0; i < 26;i++)
			if(v[i])
				ans += v[i] + 1;
		cout << ans;
		cout << "\n";
	}
	return 0;
}
