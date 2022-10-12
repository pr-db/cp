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
		vector<pair<ll, ll>> a(n);
		ll c = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i].second;
			if (a[i].second)
				c++;
		}
		c = min(c, n - c);
		for (ll i = 0; i < n; i++)
			cin >> a[i].first;
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
		ll c0 = c, c1 = c;
		// cout << c0 << " " << c1 << "  ";
		ll sum = 0;

		for (ll i=0; i < n; i++)
		{
			if (a[i].second && c1)
			{
				c1--;
				sum += 2 * a[i].first;
				// cout << "A";
			}
			else if (!a[i].second && c0)
			{
				c0--;
				sum += 2 * a[i].first;
				// cout << "B";
			}
			else
			{
				sum += a[i].first;
				// cout << "C";
			}
		}
		if(c==n-c)
			sum -= a[n - 1].first;
		cout << sum;
		cout << "\n";
	}
	return 0;
}
