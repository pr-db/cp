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
		ll n, k;
		cin >> n >> k;
		vector<ll> a(2 * n);
		for (int i = 0; i < 2*n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		ll c = 0;
		for (int i = 0; i < n; i++)
		{
			// cout << a[i + n] - a[i] << " ";
			if (a[i + n] - a[i] < k)
			{
				c = 1;
				break;
			};
		}
		if (c)
			cout << "NO";
		else
			cout << "YES";
		nl;
	}
	return 0;
}
