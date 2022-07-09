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
		vector<ll> v(4);
		ll ct = 0;
		for (ll i = 0; i < 4; i++)
		{
			cin >> v[i];
			if (v[i])
				ct++;
		}
		if (ct > 3)
			cout << 2;
		else if (ct == 0)
			cout << 0;
		else
			cout << 1;
		cout << "\n";
	}
	return 0;
}
