#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, m;
	cin >> n >> m;
	vector<ll> a(n + 1);

	for (ll i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	vector<pair<ll, ll>> vp;
	for (ll i = 0; i < m; i++)
	{
		ll a, b;
		cin >> a >> b;
		vp.push_back({a, b});
	}

	vector<ll> dp(n, 0);
	for (ll i = 1; i < n; i++)
	{
		dp[i] = dp[i - 1] + min((ll)0, a[i] - a[i - 1]);
	}

	vector<ll> dp2(n + 1, 0);
	for (ll i = n - 1; i > 0; i--)
	{
		dp2[i - 1] = dp2[i] + min((ll)0, a[i - 1] - a[i]);
	}
	for (ll i = 0; i < n; i++)
		cout << dp[i] << " ";
	for (ll i = 0; i < m; i++)
	{
		ll a = vp[i].first;
		ll b = vp[i].second;
		if (a < b)
		{
			cout << abs(dp[b - 1] - dp[a - 1]) << "\n";
		}
		else
			cout << abs(dp2[b - 1] - dp2[a - 1]) << "\n";
		}
	return 0;
}