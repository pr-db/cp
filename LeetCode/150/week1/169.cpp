#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int majorityElement(vector<int> &nums)
	{
		// majority element is +1, rest all are -1, so the final sum should be >1
		//  try to find the sum>1 with the number. Add 1 if same number subtract 1 if different

		int maxi, count = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (count == 0)
				maxi = nums[i];

			if (nums[i] == maxi)
				count++;
			else
				count--;
		}
		return maxi;
	}
	// int majorityElement(vector<int>& nums) {
	//     sort(nums.begin(), nums.end());
	//     int ct = 0;
	//     int ctmax = 0;
	//     int maxi = INT_MIN;
	//     int prev = INT_MIN;
	//     for(int u: nums)
	//     {
	//         if(u==prev)
	//             ct++;
	//         else
	//             ctmax = max(ct,ctmax), prev = u, ct = 1;

	//         if(ct>ctmax)
	//             maxi=u;
	//     }
	//     return maxi;
	// }
	// int majorityElement(vector<int>& nums) {
	//     map<int,int> mp;
	//     for(int u : nums)
	//         mp[u]++;

	//     int max=INT_MIN;
	//     int maxi=INT_MIN;
	//     for(auto u : mp)
	//         if(u.second>max)
	//             max=u.second, maxi=u.first;
	//     return maxi;
	// }
};