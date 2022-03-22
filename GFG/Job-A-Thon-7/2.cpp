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
		int n;
		cin >> n;
		int A[n];
		int B[n];

		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> B[i];
		}
		unordered_map<int, int> mp;
		for (int i = 0; i < n; i++)
		{
			if (mp[A[i]] != 0)
			{
				mp[A[i]] = min(mp[A[i]], B[i]);
			}
			else
			{
				mp[A[i]] = B[i];
			}
		}

		ll ans = 0;
		for (auto x : mp)
		{
			ans += x.second;
		}

		cout << ans << "\n";
	}

	return 0;
}