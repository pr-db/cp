#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		vector<ll> v;
		while (n > 0)
		{
			v.push_back(n % 10);
			// cout<<n%10<<"\n";
			n = n / 10;
		}
		sort(v.begin(), v.end());
		ll m = v.size();

		if (m == 2)
			cout << v[1] << "\n";
		else
			cout << v[0] << "\n";
	}

	return 0;
}