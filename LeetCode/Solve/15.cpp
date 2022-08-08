#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<vector<int>> threeSum(vector<int> &a)
	{
		sort(a.begin(), a.end());
		vector<vector<int>> ans;

		for (int l = 0; l < a.size(); l++)
		{
			if ((l > 0) && (a[l] == a[l - 1]))
				continue;

			int i = l + 1, j = a.size() - 1;
			while (i < j)
			{
				int k = a[l] + a[i] + a[j];
				if (k < 0)
					i++;
				else if (k > 0)
					j--;
				else
				{
					ans.push_back(vector<int>{a[l], a[i], a[j]});
					while (i < j && a[i] == a[i + 1])
						i++;
					while (i < j && a[j] == a[j - 1])
						j--;
					i++;
					j--;
				}
			}
		}
		return ans;
	}
};