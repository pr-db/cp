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
		ll n;
		cin >> n;
		vector<ll> a(n);
		vector<ll> b(n);

		vector<ll> p, q;
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		b = a;
		sort(b.begin(), b.end());

		ll i = 0, j = 0;
		while (i < n)
		{
			if (a[i] == b[j])
			{
				p.push_back(a[i++]);
				j++;
			}
			else
				q.push_back(a[i++]);
		}
		if(p.size()==n||n==2|| is_sorted(q.begin(),q.end()))
			cout << "YES";
		else
			cout << "NO";

		cout << "\n";
	}
	return 0;
}
