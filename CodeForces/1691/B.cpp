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
		ll n, k = 1;
		cin >> n;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		vector<ll> mk;
		vector<ll> ans;
		for (ll i = 1; i < n; i++)
		{
			if (a[i] == a[i - 1])
				k++;
			else
			{
				mk.push_back(k);
				k = 1;
			}
		}

		mk.push_back(k);
		ll j = 1;
		for (ll i = 0; i < mk.size();i++)
		{
			ll tm = mk[i];
			if (mk[i] == 1)
			{
				ans.clear();
				break;
			}
			while(mk[i]--)
				ans.push_back(j++);
			// for (ll i = 0; i < ans.size(); i++)
			// 	cout << ans[i] << " ";
			cout << "\n";
			reverse(ans.end() - tm, ans.end());
			reverse(ans.end() -tm + 1, ans.end());
		}
		if(ans.size())
			for (ll i = 0; i < ans.size(); i++)
				cout << ans[i] << " ";
		else
			cout << -1;
		cout << "\n";
	}
	return 0;
}
