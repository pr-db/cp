#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void printa(vector<vector<int>> &a)
{
	cout << "\n";
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}

vector<vector<int>> func(vector<vector<int>> &a)
{
	int n = a.size();
	int m = a[0].size();

	cout << n << " " << m;
	if (m < n)
	{
		for (int i = 0; i < a.size(); i++)
			a[i].resize(n);
		for (int i = 0; i < a.size(); i++)
			for (int j = i; j < a[i].size(); j++)
				swap(a[i][j], a[j][i]);
		a.resize(m);
	}
	else
	{
		a.resize(m);
		for (int i = n; i < a.size(); i++)
			a[i].resize(m, 0);

		for (int i = 0; i < a.size(); i++)
			for (int j = i; j < a[i].size(); j++)
				swap(a[i][j], a[j][i]);
		for (int i = 0; i < a.size(); i++)
			a[i].resize(n);
	}
	return a;
}
int main()
{
	int n;
	vector<vector<int>> a = {{1, 2}, {3, 4}, {5, 6}};
	//, {7, 8, 9}};
	func(a);
	printa(a);
	return 0;
}
