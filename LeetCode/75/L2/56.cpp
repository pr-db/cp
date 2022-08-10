#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<vector<int>> merge(vector<vector<int>> &a)
	{
		vector<vector<int>> b;
		sort(a.begin(), a.end());

		b.push_back(a[0]);
		for (int i = 1; i < a.size(); i++)
		{
			if (a[i][0] <= b[b.size() - 1][1])
				if (a[i][1] <= b[b.size() - 1][1])
					continue;
				else
					b[b.size() - 1][1] = a[i][1];
			else
				b.push_back(a[i]);
		}
		return b;
	}
};