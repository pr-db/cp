#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
	vector<int> s;
	int sum = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
		s.push_back(sum);
	}
	return s;
}
int main()
{
	int n;
	vector<int> a = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
	n = a.size();
	// int ans = func(a);
	// cout << ans;
	return 0;
}
