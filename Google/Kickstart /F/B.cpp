#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)

class Graph
{
public:
	ll v;
	vector<vector<ll>> adj;
	vector<int> vis;

	Graph(ll _V)
	{
		this->v = _V;
		this->adj = vector<vector<ll>>(_V);
		this->vis = vector<int>(_V);
	}

	void edge(ll u, ll v)
	{
		adj[u - 1].push_back(v - 1);
	}
};
int main()
{
	FastIO;
	int t;
	cin >> t;
	int k = 1;
	while (k <= t)
	{
		int ans = 0;
		int n, q;
		cin >> n >> q;
		Graph g(n);
		g.vis[0]++;
		for (int i = 0; i < n - 1; i++)
		{
			int a, b;
			cin >> a >> b;
			if (g.vis[a - 1])
				g.edge(a, b), g.vis[b - 1]++;
			else
				g.edge(b, a), g.vis[a - 1]++;
		}

		queue<int> Q;
		Q.push(0);
		vector<int> level;
		while (Q.size())
		{
			queue<int> Q1;
			swap(Q, Q1);
			int ct = 0;
			while (Q1.size())
			{
				int cur = Q1.front();
				Q1.pop();
				for (int u : g.adj[cur])
					Q.push(u);
				ct++;
			}
			level.push_back(ct);
		}
		vector<int> a(q);
		for (int i = 0; i < q; i++)
			cin >> a[i];
		int lev = 0;
		for (int i = 0; i < level.size(); i++)
		{
			lev += level[i];
			if (lev <= q)
				ans += lev;
			else
				break;
			// cout << level[i] << " ";
		}
		cout << "Case #" << k++ << ": " << min(n,ans) << "\n";
	}

	return 0;
}
