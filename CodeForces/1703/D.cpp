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
		ll n;
		cin >> n;
		vector<string> a(n);
		unordered_map<string, ll> m;
		vector<ll> s(n);
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			m[a[i]]++;
		}
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < a[i].size(); j++)
			{
				string s1 = a[i].substr(0, j + 1);
				string s2 = a[i].substr(j + 1, a[i].size() - j - 1);
				// cout << s1 << " " << s2<<", ";
				// cout << m[s1] << " " << m[s2] << ",\n";

				if (m[s1] && m[s2])
				{
					s[i] = 1;
					break;
				}
			}
		}
		for (ll i = 0; i < n; i++)
			cout << s[i];
		nl;
	}
	return 0;
}
