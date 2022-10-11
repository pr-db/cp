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
		vector<ll> b(n);
		int a0 = 0, b0 = 0;
		int ct = 0;

		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			if (!a[i])
				a0++;
		}
		for (ll i = 0; i < n; i++)
		{
			cin >> b[i];
			if (!b[i])
				b0++;
			if (a[i] != b[i])
				ct++;
		}
		int ans = abs(a0 - b0);
		if(ct&&!ans)
			cout << 1;
		else if(ct==ans)
			cout << ans;
		else
			cout << ans + 1;
		cout << "\n";
	}
	return 0;
}
