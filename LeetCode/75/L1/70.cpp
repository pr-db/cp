#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	int climbStairs(int n)
	{
		long int a = 1, b = 1;
		while (n--)
			a = (b += a) - a;
		return a;
	}
};