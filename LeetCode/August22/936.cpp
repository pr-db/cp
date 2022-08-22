#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int stars, n, m;
	vector<int> ans;
	vector<int> movesToStamp(string stamp, string target)
	{
		stars = 0, n = target.size(), m = stamp.size();
		vector<int> vis(n);

		while (stars < n)
		{
			bool replace = 0;
			for (int i = 0; i <= n - m && stars < n; i++)
				if (!vis[i])
					replace = check(stamp, target, i), vis[i] = replace;
			if (!replace)
				return {};
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
	bool check(string &stamp, string &target, int &start)
	{
		for (int i = 0; i < m; i++)
			if (target[start + i] != '*' && target[start + i] != stamp[i])
				return false;
		ans.push_back(start);
		for (int i = start; i - start < m; i++)
			stars += (target[i] != '*'), target[i] = '*';
		return true;
	}
};