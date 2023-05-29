#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	int removeDuplicates(vector<int> &nums)
	{
		int size = nums.size();
		int k = nums[0];
		int ct = 1;
		for (int i = 1; i < nums.size();)
		{
			while (ct < 2 && nums[i] == k)
				ct++, i++;
			while (ct >= 2 && i < nums.size() && nums[i] == k)
				nums[i++] = 1e4 + 5, size--;
			ct = 1;
			k = nums[i++];
		}
		sort(nums.begin(), nums.end());
		return size;
	}
};