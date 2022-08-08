#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<int> twoSum(vector<int> &b, int k)
	{

		vector<pair<int, int>> a;

		for (int i = 0; i < b.size(); i++)
			a.push_back({b[i], i});
		sort(a.begin(), a.end());
		vector<int> ans(2);
		for (int i = 0, j = a.size() - 1; i < j;)
		{
			if (a[i].first + a[j].first == k)
			{
				ans[0] = a[i].second, ans[1] = a[j].second;
				break;
			}
			if (a[i].first + a[j].first < k)
				i++;
			else
				j--;
		}
		return ans;
	}
};