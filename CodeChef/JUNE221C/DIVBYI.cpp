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

		vector<ll> a(n);
		ll num = n;
		for (ll i = n - 1; i >= 0; i -= 2, num--)
			a[i] = num;
		if (n % 2)
			for (ll i = 1; i < n; i += 2, num--)
				a[i] = num;
		else
			for (ll i = 0; i < n; i += 2, num--)
				a[i] = num;
		for (ll i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << "\n";
	}
	return 0;
}
