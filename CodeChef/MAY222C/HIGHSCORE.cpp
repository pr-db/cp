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
		vector<ll> a(4);
		ll mx = INT_MIN;
		for (ll i = 0; i < 4; i++)
		{
			cin >> a[i];
			if (a[i] > mx)
				mx = a[i];
		}
		cout << mx;
		cout << "\n";
	}
	return 0;
}
