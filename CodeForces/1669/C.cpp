#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vector<ll> a(n);
		vector<ll> o, e;
		ll co1 = 0, ce1 = 0, co0 = 0, ce0 = 0;

		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			a[i] %= 2;
			if (i % 2)
			{
				if (a[i])
					co1++;
				else
					ce1++;
			}
			else
			{
				if (a[i])
					co0++;
				else
					ce0++;
			}
		}
		if((co1==0||ce1==0)&&(co0==0||ce0==0))
			cout << "YES";
		else
			cout << "NO";
		cout << "\n";
	}
	return 0;
}
