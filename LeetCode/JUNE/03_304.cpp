#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class NumMatrix
{
public:
	vector<vector<int>> a;
	NumMatrix(vector<vector<int>> &matrix)
	{
		a.resize(matrix.size());
		int sum = 0;

		for (int i = 0; i < matrix.size(); i++)
		{
			sum = 0;
			for (int j = 0; j < matrix[i].size(); j++)
			{
				if (i > 0)
					matrix[i][j] += matrix[i - 1][j];
				sum += matrix[i][j];
				a[i].push_back(sum);
			}
		}
	}
	int sumRegion(int i1, int j1, int i2, int j2)
	{
		int ans = a[i2][j2];
		if (i1 > 0)
		{
			ans -= a[i1 - 1][j2];
			if (j1 > 0)
			{
				ans -= a[i2][j1 - 1];
				ans += a[i1 - 1][j1 - 1];
			}
		}
		else if (j1 > 0)
			ans -= a[i2][j1 - 1];
		cout << ans;
		return ans;
	}
	void printa()
	{
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < a[i].size(); j++)
				cout << a[i][j] << " ";
			cout << "\n";
		}
	}
};
int main()
{
	int n;
	cin >> n;
	vector<vector<int>> a;
	vector<int> p;
	int q;
	for (int i = 0; i < n; i++)
	{
		p.clear();
		for (int j = 0; j < n; j++)
		{
			cin >> q;
			p.push_back(q);
		}
		a.push_back(p);
	}
	NumMatrix *obj = new NumMatrix(a);
	obj->printa();
	cout << "\n";

	obj->sumRegion(0, 2, 2, 2);
	return 0;
	}
