#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t > 0)
	{
		double x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;
		double c1 = y1 / x1, c2 = y2 / x2;
		if (c1 > c2)
			cout << 1 << "\n";
		else if (c1 == c2)
			cout << 0 << "\n";
		else if (c1 < c2)
			cout << -1 << "\n";

		t--;
	}
	return 0;
}
