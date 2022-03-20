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
		ll n, ce = 0, co = 0;
		cin >> n;
		vector<ll> a(n);
		vector<ll> ans;
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] % 2)
				co++;
			else
				ce++;
		}
		if (co < 2)
			cout << -1;
		else if (ce == 0 && co % 2)
			cout << -1;
		else if (co % 2 == 0)
		{
			for (ll i = 0; i < a.size();)
				if (co > 0 && a[i] % 2)
				{
					ans.push_back(a[i]);
					a.erase(a.begin() + i);
					co--;
				}
				else
					i++;
			for (ll i = 0; i < a.size(); i++)
				ans.push_back(a[i]);
					
		}
		else
		{
			for (ll i = 0; i < a.size(); )
				if (co >0 && a[i] % 2)
				{
					ans.push_back(a[i]);
					a.erase(a.begin() + i);
					co--;
				}
				else
					i++;
			// cout << "<" << ans.size() << ">";
			for (ll i = 0; i < a.size(); i++)
					ans.insert(ans.begin()+ ans.size()-1,a[i]);
		}
		for (ll i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";
		cout << "\n";
	}
	return 0;
}
