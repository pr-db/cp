#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	vector<vector<int>> insert(vector<vector<int>> &a, vector<int> &b)
	{
		vector<vector<int>> c;
		int i = 0;
		while (i < a.size() && a[i][0] < b[0])
			c.push_back(a[i++]);

		if (!c.size())
			c.push_back(b);
		else
		{
			if (c[c.size() - 1][1] < b[0])
				c.push_back(b);
			else if (c[c.size() - 1][1] < b[1])
				c[c.size() - 1][1] = b[1];
		}

		while (i < a.size() && b[1] > a[i][1])
			i++;

		if (i == a.size())
			return c;

		if (c[c.size() - 1][1] < a[i][0])
			c.push_back(a[i++]);
		else if (c[c.size() - 1][1] < a[i][1])
			c[c.size() - 1][1] = a[i++][1];
		else
			i++;

		while (i < a.size())
			c.push_back(a[i++]);

		return c;
	}
};