#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int maxScoreSightseeingPair(vector<int> &values)
	{

		int ans = INT_MIN;
		int n = values.size();
		int max_end = values[values.size() - 1] - values.size() + 1;
		for (int i = n - 2; i >= 0; i--)
		{
			ans = max(ans, values[i] + i + max_end);
			max_end = max(max_end, values[i] - i);
		}

		return ans;
	}
};