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
		ll n, m;
		cin >> n >> m;
		vector<ll> a(m);
		vector<ll> w(n);
		for (ll i = 0; i < m; i++)
		{
			cin >> a[i];
			w[a[i]-1]++;
		}
		sort(w.begin(), w.end());
		reverse(w.begin(), w.end());
		ll ct = 0;
		// cout << w[0] << " ";
		ll k = 0;
		while (k < n && w[k] > 0)
		{
			ll s = 0;
			for (ll i = 0; i < n; i++)
			{
				w[i]--;
				if (w[i] == -2)
				{
					s++;
					w[i] = 0;
				}
			}
			// cout << s << " ";
			while (k < n && s > 0)
			{
				w[k] -= s;
				s = 0;
				if (w[k] < 0)
				{
					s += abs(w[k]);
					k++;
				}
			}
			ct++;
		}
		if (n == 1)
			cout << m;
		else
			cout << ct;
		cout << "\n";
	}
	return 0;
}
