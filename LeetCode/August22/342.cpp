#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	bool isPowerOfFour(int n)
	{
		if (n == 1)
			return true;
		if (n < 1)
			return false;
		if (pow(4, int(log2(n) / 2)) == n)
			return true;
		return false;
	}
};