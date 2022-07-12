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
	if (b == 0)
		return a;
	return gcd(b, a % b);
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
		ll a, b;
		cin >> a, b;
		cout << gcd(a, b);

		cout << "\n";
	}
	return 0;
}
