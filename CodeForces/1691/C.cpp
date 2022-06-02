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
		cin >> n >> k;
		string s;
		cin >> s;
		ll i1 = -1, i2 = -1, tm = 0;

		ll ans = 0;
		ll nos = 0;
		for (ll i = 0; i < n; i++)
			if (s[i] == '1')
				nos++;

		for (ll i = 0; i < n; i++)
		{
			if (i1 == -1 && s[i] != '1')
				tm++;
			else
			{
				i1 = tm;
				break;
			}
		}
		for (ll i = n - 1; i > i1; i--)
		{
			if (i2 == -1 && s[i] != '1')
				tm++;
			else
			{
				i2 = i;
				break;
			}
		}
		// cout << ans << " ";
		ans = nos * 11;

		if (i2 == -1 && i1 != -1)
			i2 = i1;
		if (i1 == -1 && i2 != -1)
			i1 = i2;
		if (nos && i2 != n - 1)
		{
			if (nos && n - 1 - i2 <= k)
			{
				k -= n - 1 - i2;
				ans -= 10;
				nos--;
				// cout << nos<<" ";
			}
		}
		else if (nos && i2 == n - 1)
		{
			ans -= 10;
			nos--;
		}
		if (nos && i1 != 0)
		{
			if (nos && i1 <= k)
			{
				k -= i1;
				ans -= 1;
			}
		}
		else if (nos && i1 == 0)
		{
			ans -= 1;
			nos--;
		}
		if (ans < 0)
			ans = 0;
		// cout << i1 << " " << i2 << " ";
		cout << ans << "\n";
	}
	return 0;
}
