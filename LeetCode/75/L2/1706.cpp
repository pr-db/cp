#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<int> findBall(vector<vector<int>> &a)
	{
		vector<int> ans;
		int n = a.size();
		int m = a[0].size();
		for (int j = 0; j < a[0].size(); j++)
		{
			int x = 0, y = j;
			do
			{
				if (a[x][y] == 1)
					if (y + 1 < m && a[x][y + 1] == 1)
						y++, x++;
					else
						break;
				else if (y - 1 >= 0 && a[x][y - 1] == -1)
					y--, x++;
				else
					break;
			} while (x >= 0 && x < a.size() && y >= 0 && y < a[0].size());
			// cout<<x<<" "<<y<<"\n";
			if (x == a.size())
				ans.push_back(y);
			else
				ans.push_back(-1);
		}
		return ans;
	}
};