#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{

	ll n, m;
	cin >> n >> m;

	vector<string> v;
	for (ll i = 0; i < n * m; i++)
	{
		char c;
		string s;
		for (ll j = 0; j < 4; j++)
		{
			cin >> c;
			s += c;
		}
		v.push_back(s);
	}

	vector<vector<string>> bd;
	ll k = 0;
	for (ll i = 0; i < n; i++)
	{
		vector<string> curr;
		for (ll j = 0; j < m; j++)
		{
			curr.push_back(v[k]);
			k += 1;
		}
		bd.push_back(curr);
	}

	vector<pair<ll, ll>> adj[n * m + 1];
	k = 0;
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			if (j == m - 1)
			{
				k += 1;
				continue;
			}
			string s1 = bd[i][j];
			char s2 = bd[i][j + 1][3];

			ll o = 1;
			ll cnt = 0;
			while (s1[o] != s2)
			{
				o -= 1;
				if (o == -1)
				{
					o = 3;
				}
				cnt += 1;
			}

			adj[k].push_back({k + 1, cnt});
			adj[k + 1].push_back({k, cnt});
			k += 1;
		}
	}

	k = 0;
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			if (i == n - 1)
			{
				k += 1;
				continue;
			}
			string s1 = bd[i][j];
			char s2 = bd[i + 1][j][0];

			ll o = 2;
			ll cnt = 0;
			while (s1[o] != s2)
			{
				o -= 1;
				if (o == -1)
				{
					o = 3;
				}
				cnt += 1;
			}

			// cout<<k<<" "<<k+m<<"\n";
			adj[k].push_back({k + m, cnt});
			adj[k + m].push_back({k, cnt});
			k += 1;
		}
	}

	queue<pair<ll, ll>> q;
	vector<ll> dis((n * m) + 1, INT_MAX);
	dis[0] = 0;
	q.push({0, 0});

	while (!q.empty())
	{
		ll c = q.front().second;
		ll w = q.front().first;
		q.pop();

		for (auto x : adj[c])
		{
			if (dis[x.first] > w + x.second)
			{
				dis[x.first] = w + x.second;
				q.push({x.second + w, x.first});
			}
		}
	}

	// for(ll i=0;i<n*m;i++){
	//     cout<<dis[i]<<" ";
	// }

	cout << dis[(n * m) - 1];

	return 0;
}