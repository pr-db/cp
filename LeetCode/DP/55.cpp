#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	bool canJump(vector<int> &nums)
	{

		for (int i = nums.size() - 2; i >= 0;)
		{
			if (nums[i] == 0)
			{
				int ind = i--, flag = 0;

				while (i >= 0)
				{
					if (nums[i] > ind - i)
					{
						flag = 2;
						break;
					}
					else
						i--;
				}
				if (!flag)
					return false;
			}
			else
				i--;
		}
		return true;
	}
};