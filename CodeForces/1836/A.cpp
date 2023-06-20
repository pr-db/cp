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
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		string ans = "YES";
		vector<int> ct(110);
		for (int i = 0; i < n; i++)
			ct[a[i]]++;
		for (int i = 0; i < 109; i++)
			if (ct[i + 1] > ct[i])
				ans = "NO";
		// for (int i = 1; i < n; i++)
		// {
		// 	if (a[i] - a[i - 1] > 1)
		// 	{
		// 		ans = "NO";
		// 		break;
		// 	}
		// 	if (a[i] - a[i - 1] < 0 && a[i])
		// 		ans = "NO";
		// }
		cout << ans;
		cout << "\n";
	}
	return 0;
}
