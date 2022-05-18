#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int minCostConnectPoints(vector<vector<int>> &a)
{
	int n = a.size();
	if(n==1)
		return 0;
	// cout << n;
	// cout << "hi";
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int mincost = INT_MAX;
		int lastj = 0;
		int j = 0;
		if (a[i].size() == 2)
		{
			for (j = 0; j < n; j++)
			{
				if (j != i)
					mincost = min((abs(a[j][0] - a[i][0]) + abs(a[j][1] - a[i][1])), mincost);
				if (mincost == (abs(a[j][0] - a[i][0]) + abs(a[j][1] - a[i][1])))
					lastj = j;
			}
			// cout << mincost << "  ";

			ans += mincost;
			a[i].push_back(lastj);
			a[lastj].push_back(i);

			// if (a[i].size() == 2)
			// 	a[i].push_back(1);
			// else
			// 	a[i][2] += 1;

			// if (a[lastj].size() == 2)
			// 	a[lastj].push_back(1);
			// else
			// 	a[lastj][2] += 1;
		}
		for (j = 0; j < n; j++)
		{
			for (ll k = 0; k < a[j].size(); k++)
				cout << a[j][k] << " ";
			cout << "\n";
		}
		cout << "\n";
	}

	return ans;
}
int main()
{
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(2, 0));
	for (ll i = 0; i < n; i++)
		cin >> a[i][0] >> a[i][1];
	// for (ll i = 0; i < n; i++)
	// {
	// 	for (ll j = 0; j < a[0].size(); j++)
	// 		cout << a[i][j] << " ";
	// 	cout << "\n";
	// }
	int ans = minCostConnectPoints(a);
	cout << ans;
	return 0;
}
