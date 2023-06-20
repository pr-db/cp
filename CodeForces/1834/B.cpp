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
		int ans = 0;
		string a, b;
		cin >> a >> b;
		// 1234
		// 0034
		int n = a.size(), m = b.size();
		string s;
		for (int i = 0; i < abs(n - m); i++)
			s += "0";
		if (n > m)
			b = s + b;
		else
			a = s + a;
		int lead = 0;
		for (int i = 0; i < max(n, m); i++)
		{
			if (lead)
				ans += 9;
			else
				ans += b[i] - a[i];
			if (b[i] > a[i])
				lead = 1;
		}
		cout << ans;
		cout << "\n";
	}
	return 0;
}
