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
		vector<char> a = {'a', 'e', 'i', 'o', 'u'};
		ll ct = 0;
		for (ll i = 0; i < n; i++)
		{
			ll c = 1;
			for (ll j = 0; j < 5; j++)
				if (a[j] == s[i])
					c = 0;

			if (c)
				ct++;
			else
				ct = 0;
			if (ct >= 4)
				break;
		}

		if (ct >= 4)
			cout << "NO";
		else
			cout << "YES";
		cout
			<< "\n";
	}
	return 0;
}
