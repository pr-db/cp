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
		ll n, k, x, y;
		cin >> n >> k >> x >> y;
		if(x<=y)
			cout << n * x;
		else
			cout << k * x + (n - k) * y;
		cout << "\n";
	}
	return 0;
}
