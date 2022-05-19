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
		ll l = 0, r = 0;
		for (ll i = 1; i < a.size(); i++)
		{
			r++;
			if (a[i] != a[i - 1])
			{
				k += r - l ;
				l = i;
				r = i;
			}
			else
			{
				l++;
			}
			
		}
		cout << k+1  << "\n";
	}
	return 0;
}
