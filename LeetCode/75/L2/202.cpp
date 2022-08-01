#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	bool isHappy(int n)
	{
		map<int, int> mp;
		while (!mp[n])
		{
			mp[n]++;
			int newn = 0;
			while (n)
			{
				newn += pow(n % 10, 2);
				n /= 10;
			}
			n = newn;
		}
		if (n == 1)
			return true;
		return false;
	}
};