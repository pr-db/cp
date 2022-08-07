#include <bits/stdc++.h>

using namespace std;

int countPairs(vector<int> &nums, int k)
{
	int ans=0,n = nums.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if((i*j)%k!=0)
				continue;
			else
			{
				if (nums[i]==nums[j])
					ans++;
			}
			
		}
	}
	return ans;
}
int main()
{
	
	return 0;
}
