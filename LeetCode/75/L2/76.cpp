#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	string minWindow(string s, string t)
	{
		vector<int> let(128, 0);
		int min_len = INT_MAX, min_start = 0, low = 0, count = 0;

		for (int i = 0; i < t.size(); i++)
			let[t[i]]++;

		for (int i = 0; i < s.size(); i++)
		{
			if (let[s[i]] > 0)
				count++;
			let[s[i]]--;

			if (count == t.size())
			{
				while (low < i && let[s[low]] < 0)
					let[s[low++]]++;

				int len = i - low + 1;
				if (min_len > len)
					min_len = len, min_start = low;

				count--;
				let[s[low++]]++;
			}
		}

		if (min_len == INT_MAX)
			return "";
		return s.substr(min_start, min_len);
	}
};