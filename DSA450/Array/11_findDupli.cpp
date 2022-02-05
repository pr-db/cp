

#include <bits/stdc++.h>

using namespace std;

// ********************************** not using constant space **********************************
// int func(vector<int> &nums)
// {
// 	vector<int> a = nums;
// 	int n = a.size();
// 	sort(a.begin(),a.end());

// 	for (int i = 0; i < n-1;i++)
// 	{
// 		if(a[i]==a[i+1])
// 			return a[i];

// 	}
// 	return 0;
// }

// ********************************** changes value of array **********************************

int func(vector<int> &nums)
{
	int ans = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[abs(nums[i])] > 0)
		{
			nums[abs(nums[i])] *= -1;
		}
		else
		{
			ans = abs(nums[i]);
		}
	}
	for (int i = 0; i < nums.size(); i++)
	{
		nums[i] = abs(nums[i]);
	}
	return ans;
}

// ********************************** changes value of array **********************************

int main()
{
	int n, k;
	vector<int> a = {1, 3, 4, 2, 2};
	n = sizeof(a) / sizeof(a[0]);
	k = 5;
	int ans = func(a);
	cout << ans;
	return 0;
}
