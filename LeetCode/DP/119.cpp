#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<int> getRow(int row)
	{
		int n = row + 1;
		vector<int> ans(n);
		ans[0] = 1;

		for (int i = 1; i < n; i++)
		{
			int cur = ans[1], pre = ans[0];
			for (int j = 1; j <= i; j++)
			{
				ans[j] = cur + pre;
				pre = cur;
				cur = ans[j + 1];
			}
		}
		return ans;
	}
};