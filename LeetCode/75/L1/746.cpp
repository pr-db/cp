#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class Solution
{
public:
	int minCostClimbingStairs(vector<int> &cost)
	{
		int n = cost.size();
		int cur = cost[0];
		int next = cost[1];
		int ans = 0;
		if (n == 1 || n == 2)
			ans = cost[n - 1];
		for (int i = 2; i < n; i++)
		{
			ans = cost[i] + min(cur, next);
			cur = next;
			next = ans;
		}
		return min(cur, next);
	}
};