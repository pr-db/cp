#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	int threeSumClosest(vector<int> &a, int k)
	{
		sort(a.begin(), a.end());
		int n = a.size();
		int dif = INT_MAX;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			int l = i + 1, r = n - 1;
			while (l < r)
			{
				int sum = a[i] + a[l] + a[r];
				if (dif > abs(sum - k))
					dif = abs(sum - k), ans = sum;
				if (sum > k)
					r--;
				else
					l++;
			}
		}
		return ans;
	}
};