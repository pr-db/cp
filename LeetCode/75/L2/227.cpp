#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	int calculate(string s)
	{
		istringstream in('+' + s + '+');

		long long num1 = 0, ans = 0, num2;
		char op;

		while (in >> op)
			if (op <= 45 && op >= 43)
			{
				ans += num1;
				in >> num1;
				if (op == 45)
					num1 *= -1;
			}
			else
			{
				in >> num2;
				if (op == '*')
					num1 *= num2;
				else
					num1 /= num2;
			}
		return ans;
	}
};