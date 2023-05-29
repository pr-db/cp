#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// vector<int> func(vector<int> &a);
int func(vector<int> &nums)
{
	int i, u = 0;
	if (nums.size() == 1)
		return 1;
	for (i = 1; i < nums.size(); i++)
		if (nums[i] == nums[i - 1])
			nums[i - 1] = 101, u++;
	sort(nums.begin(), nums.end());
	return nums.size() - u;
}
// beats 60,90
// int removeDuplicates(vector<int>& nums) {
//     int i,j,u=0,k=0;
//     if(nums.size()==1)
//         return 1;
//     for( i=0; k<nums.size();)
//     {
//         j = i+1, k = j + u;
//         if(k>=nums.size())
//             break;
//         // cout<<k<<" ";
//         swap(nums[j], nums[k]);
//         if(nums[i]==nums[j])
//             u++;
//         else
//             i++;
//     }
//     return nums.size()-u;
// }

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int ans = func(a);
	cout << ans;

	// vector <int> ans = func(a);
	// for (int i = 0; i < ans.size(); i++)
	// 	cout << ans[i]<<" ";
	return 0;
}
