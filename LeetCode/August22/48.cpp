#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	void rotate(vector<vector<int>> &a)
	{
		int n = a.size() - 1;
		for (int i = 0; i < (n + 1) / 2; i++)
		{
			int t;
			for (int j = i; j < n - i; j++)
			{
				t = a[j][n - i];
				a[j][n - i] = a[i][j];
				swap(a[n - i][n - j], t);
				swap(a[n - j][i], t);
				a[i][j] = t;
			}
		}
	}
};