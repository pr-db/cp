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
		cin >> n;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		vector<ll> b(n);
		for (ll i = 0; i < n; i++)
			cin >> b[i];
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		vector<ll> c(n / 2 + 2);
		for (ll i = 0, j = n - 1, k = n - 1; ; i++)
		{
			if (a[j] >= b[k])
				c[i] = a[j--];
			else
				c[i] = a[k--];
			
			if(i==n/2-1)
			{
				
			}
		}

		cout << a[2 * n - 1 - n / 2] + a[2 * n - 2 - n / 2];

		for (ll i = 0; i < n; i++)
			a[i] += b[i];

		cout << "\n";
	}
	return 0;
}
