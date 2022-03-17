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
		ll n, k = 0;
		cin >> n >> k;
		vector<ll> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		ll c = 0, i = 0;
		while (c <= k && i < n)
			if (c + a[i] <= k)
				c += a[i++];
			else if (c + ((a[i]+1) / 2 )<= k)
				c += ((a[i++] + 1) / 2);
			else
				break;
		cout << i << "\n";
	}
	return 0;
}