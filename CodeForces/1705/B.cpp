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
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		ll ans = 0;
		ll ct = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i])
				ans += a[i];
			else if(ans)
				ct++;
		}
		
		cout << ans+ct;
		cout << "\n";
	}
	return 0;
}
