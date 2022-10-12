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
		cin >> n >> k;
		vector<ll> a(k);
		for (ll i = 0; i < k; i++)
			cin >> a[i];
		vector<ll> b(k);
		for (ll i = k - 1; i > 0; i--)
			b[i] = a[i] - a[i - 1];

		string ans = "Yes";
		if (n - k)
			b[0] = ceil(float(a[0]) / float(n - k));
		else
			b[0] = a[0];
		cout<<b[0]<<" ";
		for (int i = 1; i < k; i++)
			if (b[i] < b[i - 1])
				ans = "No";

		cout << ans;
		cout << "\n";
	}
	return 0;
}
