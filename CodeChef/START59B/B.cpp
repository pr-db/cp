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
		ll n, k = 0;
		cin >> n;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		int m = *max_element(a.begin(), a.end());
		if(a[0]==m)
		{
			cout << -1 << "\n";
			continue;
		}
		vector<int> x;
		vector<int> y;
		int i = 0;
		while (a[i] < m)
			x.push_back(a[i++]);
		while(i<n)
			y.push_back(a[i++]);
		cout << x.size();
		nl;
		for (auto u : x)
			cout << u << " ";
		nl;
		cout << y.size();
		nl;
		for (auto u : y)
			cout << u << " ";

		cout << "\n";
	}
	return 0;
}
