#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<vector<int>> out;

	void recur(vector<int> &a, int i)
	{
		if (i == a.size())
		{
			out.push_back(a);
			return;
		}
		for (int j = i; j < a.size(); j++)
		{
			swap(a[i], a[j]);
			recur(a, i + 1);
			swap(a[i], a[j]);
		}
	}

	vector<vector<int>> permute(vector<int> &nums)
	{
		recur(nums, 0);
		return out;
	}
};