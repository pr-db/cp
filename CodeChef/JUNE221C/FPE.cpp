#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)

class Graph
{
public:
	ll n;
	ll leafSum;
	ll gcdSum;
	vector<vector<ll>> adj;
	vector<ll> a;
	vector<ll> leafSumBranch;
	vector<ll> gcdSumBranch;

	Graph(ll _n)
	{
		this->n = _n;
		this->leafSum = 0;
		this->gcdSum = -1;
		this->a = vector<ll>(_n);
		this->adj = vector<vector<ll>>(_n);
	}
	void edge(ll u, ll v)
	{
		adj[u - 1].push_back(v - 1);
		adj[v - 1].push_back(u - 1);
	}
};

ll gcd(ll a, ll b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	if (a == b)
		return a;

	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}

void DFS(Graph &g, ll cur, ll par)
{
	for (auto child : g.adj[cur])
		if (child != par)
			DFS(g, child, cur);

	if (g.adj[cur].size() == 1 && g.adj[cur][0] == par)
		g.leafSum += g.a[cur];

	if (g.gcdSum == -1)
		g.gcdSum = g.a[cur];
	else
		g.gcdSum = gcd(g.gcdSum, g.a[cur]);
}
int main()
{
	FastIO;

	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		Graph g(n);

		for (ll i = 0; i < n; i++)
			cin >> g.a[i];
		for (ll i = 1; i < n; i++)
		{
			ll u, v;
			cin >> u >> v;
			g.edge(u, v);
		}

		for (auto u : g.adj[0])
		{
			g.leafSum = 0;
			g.gcdSum = -1;
			DFS(g, u, 0);

			// cout << g.leafSum << ", " << g.gcdSum << "\n";
			g.leafSumBranch.push_back(g.leafSum);
			g.gcdSumBranch.push_back(g.gcdSum);
		}

		ll b = g.leafSumBranch.size();

		ll ind = -1, pind = -1, maxleafSum = INT_MIN, mingcdSum = INT_MAX;
		for (ll i = 0; i < b; i++)
		{

			if (g.leafSumBranch[i] > maxleafSum)
			{
				ind = i;
				mingcdSum = g.gcdSumBranch[i];
			}
			else if (g.leafSumBranch[i] == maxleafSum)
			{
				if (g.gcdSumBranch[i] < mingcdSum)
				{
					ind = i;
					mingcdSum = g.gcdSumBranch[i];
				}
			}
		}
		ll ans = 0;
		for (ll i = 0; i < b; i++)
		{
			if (i == ind)
				ans += g.leafSumBranch[i];
			else
				ans += g.gcdSumBranch[i];
		}

		cout << ans;

		cout << "\n";
	}
	return 0;
}
