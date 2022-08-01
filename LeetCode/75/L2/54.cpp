#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<int> spiralOrder(vector<vector<int>> &a)
	{
		int i = 0, j = 0, k = 0;
		int n = a.size();
		int m = a[0].size();
		vector<int> ans;
		while (k <= sqrt(n) + 1)
		{
			while (j < m - 1 && a[i][j + 1] != 101)
				ans.push_back(a[i][j]), a[i][j++] = 101;
			while (i < n - 1 && a[i + 1][j] != 101)
				ans.push_back(a[i][j]), a[i++][j] = 101;
			while (j > 0 && a[i][j - 1] != 101)
				ans.push_back(a[i][j]), a[i][j--] = 101;
			while (i > 0 && a[i - 1][j] != 101)
				ans.push_back(a[i][j]), a[i--][j] = 101;
			k++;
		}
		ans.push_back(a[i][j]);
		return ans;
	}
};