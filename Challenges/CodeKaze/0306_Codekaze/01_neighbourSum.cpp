#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<vector<int>> neighbouringElements(vector<vector<int>> &a)
{
	vector<vector<int>> b(a.size(), vector<int>(a[0].size()));
	for (int i = 0; i < a.size(); i++)
		for (int j = 0; j < a[i].size(); j++)
		{
			if ((j + 1) < a[i].size())
				b[i][j] += a[i][j + 1];
			if ((j - 1) >= 0)
				b[i][j] += a[i][j - 1];
			if ((i + 1) < a.size())
				b[i][j] += a[i + 1][j];
			if ((i - 1) >= 0)
				b[i][j] += a[i - 1][j];
		}
	return b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a;
	for (int i = 0; i < n; i++)
	{
		vector<int> tempv;
		for (int j = 0; j < m; j++)
		{
			int temp;
			cin >> temp;
			tempv.push_back(temp);
		}
		a.push_back(tempv);
	}
	a = neighbouringElements(a);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
			cout << "\n";
	}

	return 0;
}