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
		ll ans;
		if (k <= n)
			ans = (k - 1) % 2;
		vector<ll> b;
		for (ll n = 1; n <= 100; n++)
		{
			vector<ll> b;
			ll ct = 0;
			for (ll k = 1; k <= n; k++)
			{
				vector<ll> a(n);
				for (ll i = 0; i < n; i++)
					a[i] = i + 1;
				for (ll i = 0; a.size() > 1;)
				{
					a.erase(a.begin() + (k - 1) % a.size(), a.begin() + (k - 1) % a.size() + 1);
				}
				// cout <<k<<"\t"<< a[0] <<"\n";
				if (a[0] % 2)
					ct++;
				else
				{
					b.push_back(ct);
					ct = 0;
				} // cout << a.size();
			}
			b.push_back(ct);
			cout << n << ": ";
			for (ll i = 0; i < b.size(); i++)
				cout << b[i] << " ";
			cout << "\n";
		}

		cout << "\n";
	}
	return 0;
}
