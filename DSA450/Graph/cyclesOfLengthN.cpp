#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

void dfs(ll node, ll cnt, ll &par, ll &ans, ll &n, vector<bool> &vis, vector<ll> adj[])
{
	vis[node] = true;
	for (auto x : adj[node])
	{
		if (!vis[x])
		{
			dfs(x, cnt + 1, par, ans, n, vis, adj);
			for (ll i = 0; i < vis.size();i++)
				cout << vis[i] << " ";
			cout << "\n";
		}
		else
		{
			cout << cnt<<","<<x<<",  ";
			if (x == par && cnt == n)
			{
				// cout<<node<<" "<<x<<"\n";
				ans += 1;
			}
		}
	}
	vis[node] = false;
}

int main()
{

	ll v, e, n;
	cin >> v >> e >> n;

	vector<ll> adj[v + 1];
	for (ll i = 0; i < e; i++)
	{
		ll u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<bool> vis(v + 1, false);

	ll ans = 0;
	for (ll i = 0; i < v; i++)
	{
		if (!vis[i])
		{
			dfs(i, 1, i, ans, n, vis, adj);
		}
		vis[i] = true;
		cout << "\n";
	}

	cout << ans << "\n";

	return 0;
}