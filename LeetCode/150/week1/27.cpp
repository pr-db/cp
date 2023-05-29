#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int removeElement(vector<int> &nums, int val)
	{
		int size = nums.size();
		for (int i = 0; i < nums.size(); i++)
			if (nums[i] == val)
				nums[i] = 101, size--;
		// for(int i=0;i<nums.size();i++)
		sort(nums.begin(), nums.end());
		return size;
	}
};