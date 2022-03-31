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
		ll a, b;
		cin >> a >> b;
		if (a != 0)
			cout << b * 2 + a + 1;
		else
			cout << 1;
		cout << "\n";
	}
	return 0;
}
