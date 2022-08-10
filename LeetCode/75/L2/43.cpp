#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	string multiply(string a, string b)
	{
		int n = a.size();
		int m = b.size();
		string ans;
		if (a == "0" || b == "0")
			return "0";
		vector<int> v(n + m);

		int ind = n + m - 1, end = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			int in = ind--;
			for (int j = m - 1; j >= 0; j--)
				v[in--] += (a[i] - '0') * (b[j] - '0');
			end = in;
		}
		for (int i = n + m - 1; i > end; i--)
		{
			ans += v[i] % 10 + '0';
			v[i - 1] += v[i] / 10;
		}

		if (v[end + 1] > 9)
			ans += (v[end + 1] / 10 + '0');

		reverse(ans.begin(), ans.end());
		return ans;
	}
};