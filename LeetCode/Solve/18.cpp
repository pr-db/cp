#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<vector<int>> fourSum(vector<int> &a, int s)
	{

		vector<vector<int>> ans;

		if (a.size() < 4)
			return ans;

		sort(a.begin(), a.end());
		for (int m = 0; m < a.size(); m++)
		{
			long long t3 = s - a[m];
			for (int l = m + 1; l < a.size(); l++)
			{
				long long t2 = t3 - a[l];

				int i = l + 1, j = a.size() - 1;
				while (i < j)
				{
					long long k = a[i] + a[j];
					if (k < t2)
						i++;
					else if (k > t2)
						j--;
					else
					{
						ans.push_back(vector<int>{a[m], a[l], a[i], a[j]});
						while (i < j && a[i] == ans[ans.size() - 1][2])
							++i;
						while (i < j && a[j] == ans[ans.size() - 1][3])
							--j;
						// i++;
						// j--;
					}
				}
				while ((l + 1 < a.size()) && (a[l] == a[l + 1]))
					++l;
			}
			while ((m + 1 < a.size()) && (a[m] == a[m + 1]))
				++m;
		}
		return ans;
	}
};