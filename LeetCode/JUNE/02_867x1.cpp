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
	vector<vector<int>> b(a[0].size(), vector<int>(a.size()));
	for (int i = 0; i < a.size(); i++)
		for (int j = 0; j < a[i].size(); j++)
			b[j][i] = a[i][j];
	return b;
}
int main()
{
	int n;
	vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}};
	//, {7, 8, 9}};
	vector<vector<int>> b = func(a);
	printa(b);
	return 0;
}
