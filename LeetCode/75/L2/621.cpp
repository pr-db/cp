#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	int leastInterval(vector<char> &tasks, int n)
	{
		vector<int> a(26);
		int ct = 0, ans = 0;
		for (int i = 0; i < tasks.size(); i++)
			a[tasks[i] - 'A']++;
		for (int i = 0; i < 26; i++)
			ct = max(ct, a[i]);
		ans = (ct - 1) * (n + 1);
		for (int i = 0; i < 26; i++)
			if (a[i] == ct)
				ans++;
		return max(int(tasks.size()), ans);
	}
};