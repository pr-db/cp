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
		string s;
		cin >> s;
		ll ans = 0;
		if (n % 2)
		{
			ans = 1;
			for (ll i = n / 2 + 1, j = n / 2 - 1; i < n, j >= 0; i++, j--)
				if ((s[j] == s[n / 2]) && (s[i] == s[n / 2]))
					ans += 2;
				else
					break;
		}
		else
			for (ll i = n / 2, j = n / 2 - 1; i < n, j >= 0; i++, j--)
				if ((s[j] == s[n / 2]) && (s[i] == s[n / 2]))
					ans += 2;
				else
					break;
		cout << ans << "\n";
	}
	return 0;
}
	