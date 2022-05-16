
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
		ll w, x, y, z;
		cin >> w >> x >> y >> z;
		w += y * z;
		if (w > x)
			cout << "overFlow";
		else if (w == x)
			cout << "filled";
		else
			cout << "Unfilled";
		cout << "\n";
	}
	return 0;
}
