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
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		ll m;
		cin >> m;
		vector<ll> b(m);
		for (ll i = 0; i < m; i++)
			cin >> b[i];
		int bs = b[0];
		for (auto u : b)
			if (u > 0)
				bs += u;
		int sa = a[0], sb = a[0], sc = a[n - 1];
		int s = a[0];
		for (int i = 1; i < n; i++)
		{
			if (s < 0)
				break;
			s += a[i];
			sa = max(s, sa);
		}

		s = a[0];
		for (int i = 1; i < n; i++)
		{
			if (s < 0)
				s = 0;
			s += a[i];
			sb = max(s, sb);
		}

		s = a[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			if (s < 0)
				break;
			s += a[i];
			sc = max(s, sc);
		}

		int ans = max(sb, max(sa, sc) + bs);
		if (ans <= 0)
			cout << max(*max_element(a.begin(), a.end()), *max_element(b.begin(), b.end()));
		else
		cout << ans;
		// cout << sa << " " << sb << " " << sc << " ";
		cout
			<< "\n";
	}
	return 0;
}
