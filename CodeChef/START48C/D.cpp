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
		ll n;
		cin >> n;
		vector<ll> a(n);
		map<ll, ll> m;
		vector<pair<ll, ll>> v;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			m[a[i]]++;
		}
		auto u = m.begin();
		ll ans = 1,i=1;
		while(!m.empty()&& u!=m.end())
		{
			if (u->second > 0)
				if (u->first >= i)
				{
					i++;
					u->second--;
				}
				else
				{
					
					ans++;
					i = 1;
					u = m.begin();
				}
			else
			{
				while (!u->second)
				{
					m.erase(u->first);
					u = m.begin();
				}
			}
		}
		cout <<ans<< "\n";
	}
	return 0;
}
