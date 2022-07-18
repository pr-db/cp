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
		string s;
		cin >> s;
		vector<vector<char>> v(26);

		for (ll i = 0; i < n; i++)
			v[s[i] - 'a'].push_back(i);

		ll ans = 1;
		for (ll i = 0; i < 26; i++)
		{
			ll a = 0, b = 0;
			for (auto u : v[i])
				if (u % 2)
					a++;
				else
					b++;
			if (a != b)
			{
				ans = 0;
				break;
			}
		}
		if (ans)
			cout << "YES";
		else
			cout << "NO";
		cout << "\n";
	}
	return 0;
}
