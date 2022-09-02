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
		vector<ll> a(n);
		map<int, int> m;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			m[a[i]]++;
		}
		int c = 0,f=0;
		for (auto u : m)
		{
			c++;
			if (u.second > 1)
				f++;
		}			
		// cout << c << " ";
		if (c%2==0)
			cout << "YES";
		else if(f)
			cout << "YES";
		else
			cout << "NO";

		cout << "\n";
	}
	return 0;
}
