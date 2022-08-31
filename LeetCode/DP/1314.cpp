#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<vector<int>> matrixBlockSum(vector<vector<int>> &a, int k)
	{

		int n = a.size();
		int m = a[0].size();
		for (int i = 0; i < n; i++)
			for (int j = 1; j < m; j++)
				a[i][j] += a[i][j - 1];

		vector<vector<int>> ans(n, vector<int>(m, 0));

		//         for(int i=0;i<n;i++)
		//         {
		//             for(int j=0; j<m;j++)
		//                 cout<<a[i][j]<<" ";

		//             cout<<"\n";
		//         }

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				for (int x = max(0, i - k); x <= min(n - 1, i + k); x++)
					if (k >= m)
						ans[i][j] += a[x][m - 1];
					else
					{
						(j - k <= 0) ? ans[i][j] += a[x][j] : ans[i][j] += a[x][j] - a[x][j - k - 1];
						(j + k >= m) ? ans[i][j] += a[x][m - 1] - a[x][j] : ans[i][j] += a[x][j + k] - a[x][j];
					}
		return ans;
	}
};