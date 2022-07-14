#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int firstBadVersion(int n, vector<int> t)
	{
		int l = 1;
		int r = n;
		int m;
		while (l + 1 < r)
		{
			m = (l + r) / 2;
			if (t[m - 1])
				r = m;
			else
				l = m;
		}
		return r;
	}
};

int main()
{
	Solution sol;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cout << sol.firstBadVersion(n, a);
}