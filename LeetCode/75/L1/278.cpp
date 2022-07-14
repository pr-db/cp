#include <bits/stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
	int firstBadVersion(int n)
	{
		int l = 0;
		int r = n;
		int m;
		// for(int i=1;i<=n;i++)
		//     cout<<isBadVersion(i)<<" ";
		while (l + 1 < r)
		{
			m = (r - l) / 2 + l;
			if (isBadVersion(m))
				r = m;
			else
				l = m;
		}
		return r;
	}
};