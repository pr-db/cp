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
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		int sum = 0;
		int ans = n;
		for (int i = 0; i < n; i++)
		{
			sum += a[i];
			int s = i + 1;
			int j = i + 1;
			while (j < n)
			{
				int tsum = 0;
				int sp = 0;
				while (j < n && tsum < sum)
				{
					tsum += a[j++];
					sp++;
				}
				if (tsum == sum)
					s = max(s, sp);
				else
				{
					s = n + 1;
					break;
				}
			}
			ans = min(ans, s);
		}
		cout << ans;
		cout << "\n";
	}
	return 0;
}
