#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int minRefuelStops(int target, int cur, vector<vector<int>> s)
	{

		int ans = 0, i = 0;
		priority_queue<int> pq;

		for (ans = 0; cur < target; ans++)
		{
			while (i < s.size() && cur >= s[i][0])
				pq.push(s[i++][1]);

			if (pq.empty())
				return -1;

			cur += pq.top();
			pq.pop();
		}
		return ans;
	}
};