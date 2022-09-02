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
		ll n, k = 0;
		cin >> n;
		vector<vector<ll>> a(n);
		for (ll i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			a[i].push_back(x);
			for (int j = 0; j < a[i][0]; j++)
			{
				cin >> x;
				a[i].push_back(x);
			}
		}

		int f = 1;
		for (int i = 0; f&&(i < n); i++)
		{
			for (int j = i + 1; f&&(j < n); j++)
			{
				map<int, int> ans;
				for (int k = 1; k <= a[i][0]; k++)
					 ans[a[i][k]]++;

				for (int k = 1; k <= a[j][0]; k++)
					ans[a[j][k]]++;

				if (ans.size() == 5)
					f = 0;
				// cout << ans.size()<<" ";
			}
		}
		if(f)
			cout << "NO";
		else
		{
			cout << "YES";
		}

		cout << "\n";
	}
	return 0;
}
