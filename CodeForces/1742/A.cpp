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
		int a, b, c;
		cin >> a >> b >> c;
		string ans;
		if (a == (b + c) || b == (a + c) || c == a + b)
			ans = "YES";
		else
			ans = "NO";
		cout << ans;
		cout << "\n";
	}
	return 0;
}
