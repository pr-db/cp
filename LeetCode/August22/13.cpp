#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	int romanToInt(string s)
	{

		vector<int> m(26);
		m['I' - 'A'] = 1;
		m['V' - 'A'] = 5;
		m['X' - 'A'] = 10;
		m['L' - 'A'] = 50;
		m['C' - 'A'] = 100;
		m['D' - 'A'] = 500;
		m['M' - 'A'] = 1000;

		int ans = 0;
		ans += m[s[s.size() - 1] - 'A'];

		for (int i = s.size() - 2; i >= 0; i--)
		{
			if (m[s[i] - 'A'] < m[s[i + 1] - 'A'])
				ans -= m[s[i] - 'A'];
			else
				ans += m[s[i] - 'A'];
		}
		return ans;
	}
};