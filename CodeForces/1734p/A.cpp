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
		sort(a.begin(), a.end());
		int sum = 0;
		sum += abs(a[1] - a[0]) + abs(a[1] - a[2]);
		int ans = sum;
		for (int i = 2; i < n - 1; i++)
		{
			sum -= abs(a[i - 1] - a[i - 2]);
			sum += abs(a[i] - a[i + 1]);
			ans = min(ans, sum);
		}
		cout << ans;
		cout << "\n";
	}
	return 0;
}