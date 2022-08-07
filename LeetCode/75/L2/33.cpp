#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int search(vector<int> &a, int k)
	{
		int l = -1, r = a.size() - 1, m;
		while (l + 1 < r)
		{
			m = l + (r - l) / 2;
			if (a[m] >= a[r])
				l = m;
			else
				r = m;
		}
		// if(a[l+1]==k)
		if (l + 1 == 0)
			l = -1, r = a.size() - 1;
		else if (k < a[0])
			l = l, r = a.size() - 1;
		else
			r = l, l = -1;

		cout << l << " " << r;
		while (l + 1 < r)
		{
			m = l + (r - l) / 2;
			if (a[m] >= k)
				r = m;
			else
				l = m;
		}
		if (a[l + 1] == k)
			return l + 1;
		return -1;
	}
};