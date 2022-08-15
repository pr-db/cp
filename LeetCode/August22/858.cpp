#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int mirrorReflection(int p, int q)
	{
		int x = (lcm(p, q) / p) % 2;
		int y = (lcm(p, q) / q) % 2;

		if (x == 1 && y == 1)
			return 1;
		if (x == 0 && y == 1)
			return 0;
		return 2;
	}
};