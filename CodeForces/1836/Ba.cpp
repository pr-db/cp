#include <bits/stdc++.h>

using namespace std;


void solve()
{
	long long num, kos, gig;
	cin >> num >> kos >> gig;

	long long total = kos * gig;

	long long ans = (min(num - 1, total / (((gig / 2) - 1))) * ((gig / 2) - 1));
	total -= ans;

	long long r = total % gig;
	if ((r) >= floor(gig / 2))
	{
		ans -= (gig - r);
	}
	else
	{
		ans += r;
	}
	cout << ans << "\n";
}

int main()
{

	long long t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}