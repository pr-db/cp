#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int search(vector<int> &nums, int target)
	{
		int l = 0;
		int r = nums.size();
		int m;
		while (l + 1 < r)
		{
			m = (r - l) / 2 + l;
			if (nums[m] > target)
				r = m;
			else
				l = m;
		}
		if (nums[l] == target)
			return l;
		return -1;
	}
};