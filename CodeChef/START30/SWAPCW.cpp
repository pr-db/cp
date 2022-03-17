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
		string a, ans = "YES";
		cin >> a;
		string b = a;
		sort(b.begin(), b.end());
		for (ll i = 0; i < n / 2; i++)
			if (a[n - 1 - i] < a[i])
				swap(a[i], a[n - 1 - i]);
		for (ll i = 0; i < n; i++)
			if (a[i] != b[i])
				ans = "NO";
		cout << ans << "\n";
	}
	return 0;
}
