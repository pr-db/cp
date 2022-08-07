#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	bool searchMatrix(vector<vector<int>> &a, int k)
	{
		int n = a.size();
		int m = a[0].size();
		int l = -1, r = n - 1, mid;
		while (l + 1 < r)
		{
			mid = l + (r - l) / 2;
			if (a[mid][m - 1] >= k)
				r = mid;
			else
				l = mid;
		}
		int row = l + 1;
		cout << row << " ";
		// if(row>=n)
		//     return false;
		l = -1, r = m - 1;
		while (l + 1 < r)
		{
			mid = l + (r - l) / 2;
			if (a[row][mid] >= k)
				r = mid;
			else
				l = mid;
		}
		int col = l + 1;
		cout << col;

		cout << a[row][col] << " ";
		if (a[row][col] == k)
			return true;
		return false;
	}
};