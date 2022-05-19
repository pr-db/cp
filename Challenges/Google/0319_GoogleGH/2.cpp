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
		ll n, k;
		cin >> n >> k;
		vector<ll> a(n);
		vector<pair<ll, ll>> st;

		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			st.push_back(make_pair(a[i], i));
		}
		sort(st.begin(), st.end());
		ll g = n, time = 0;
		vector<ll> tables(n);
		// for (ll i = 0; i < n; i++)
		// cout << st[i].first << ","<<st[i].second<<" ";
		// cout  << "\n";
		time = st[0].first;
		tables[st[0].second ] = 1;

		for (ll i = 1; i < n; i++)
		{
			time = st[i].first;
			tables[st[i].second ] = 1;
			ll ct = 0;
			if (st[i].second -1 >= 0 && tables[st[i].second - 1] == 0)
			{
				ct++;
			}
			if (st[i].second + 1 <n && tables[st[i].second + 1] == 0)
			{
				ct++;
			}
			if(ct!=0)
				g -= 1;
			if(g==k)
				break;
		}

		cout <<time<< "\n";
	}
	return 0;
}
