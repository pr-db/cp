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
		ll n;
		cin >> n;
		string a, b;
		cin >> a >> b;
		int x = 0, y = 0, ans = 0;
		for (int i = 0; i < n; i++)
			if (a[i] != b[i])
				x++;
		reverse(a.begin(), a.end());
		for (int i = 0; i < n; i++)
			if (a[i] != b[i])
				y++;
		int diff = min(x, y);
		// cout << x << " " << y << " " << diff << ":: ";
		if (diff == x)
		{
			if (diff % 2)
				ans = diff * 2 - 1;
			else if (x == y&&diff)
				ans = diff * 2 - 1;
			else
				ans = diff * 2;
		}
		else
		{
			if (diff % 2)
				ans = diff * 2;
			else
				ans = diff * 2 - 1;

			if (diff == 0)
				ans = 2;
		}
		cout << ans;
		cout << "\n";
	}
	return 0;
}
