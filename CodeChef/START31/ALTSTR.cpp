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
		ll c0 = 0, c1 = 0;
		for (ll i = 0; i < n; i++)
			if (s[i] == '0')
				c0++;
			else
				c1++;
		ll c = min(c0, c1);
		s.clear();
		// cout << c << " ";
		if (c == 0)
		{
			cout << 1 << "\n";
			continue;
		}
		if (c == c0)
			for (ll i = 0; (i < 2 * c + 1) && (i < n); i++)
				if (i % 2)
					s.push_back('0');
				else
					s.push_back('1');
		else
			for (ll i = 0; (i < 2 * c+1) && (i < n); i++)
				if (i % 2)
					s.push_back('0');
				else
					s.push_back('1');

		cout << s.length() << "\n";
	}
	return 0;
}
