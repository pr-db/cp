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
		int n;
		int ans = 0;
		cin >> n;
		vector<int> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		for (int i = 0; i < n/2;i++)
			ans += a[n - i - 1] - a[i];
		cout << ans;
		cout << "\n";
	}
	return 0;
}
