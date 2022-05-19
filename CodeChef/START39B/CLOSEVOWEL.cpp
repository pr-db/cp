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
		vector<ll> v = {0 + 97, 4 + 97, 8 + 97, 14 + 97, 20 + 97};
		string s;
		cin >> s;
		ll ans = 1;
		ll md = pow(10, 9) + 7;
		for (ll i = 0; i < s.size(); i++)
		{
			ll f = 1;
			for (ll j = 0; j < 5; j++)
				if (s[i] == v[j])
					f=0;
			if (f)
			{
				// cout << s[i] << " ";
				vector<ll> m;
				for (ll j = 0; j < 5; j++)
				{
					// cout << abs(s[i] - v[j]) << " ";
					m.push_back( abs(s[i] - v[j]));
					if(m.size()!=1)
						if(m[m.size()-1]==m[m.size()-2])
							{
								ans*=2;
								ans %= md;
								break;
							}
				}
			}
		}
		cout << ans % md;
		cout << "\n";
	}
	return 0;
}
