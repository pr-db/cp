#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

// 1 2 2

bool solve(ll n)
{
	vector<ll> v;

	while (n != 0)
	{
		v.push_back(n % 10);
		n = n / 10;
	}

	ll last = v[0];
	// cout << "<" << last << ">";
	bool ev = false;
	if (v[0] % 2 == 0)
	{
		ev = true;
	}

	if (ev)
	{
		for (ll i = 1; i < v.size(); i++)
		{
			if (v[i] % 2 == 0)
			{
				return true;
			}
		}
	}
	else
	{
		for (ll i = 1; i < v.size(); i++)
		{
			if (v[i] % 2 != 0)
			{
				return true;
			}
		}
	}

	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while (t--)
	{
		for (ll n = 10; n < 10000; n++)
		{
			if (solve(n))
			{
				cout << n << " YES\n";
			}
			else
			{
				cout << n << " NO\n";
			}
		}
	}

	return 0;
}