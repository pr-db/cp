#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	bool isValid(string s)
	{
		stack<char> st;

		map<char, char> mp;
		mp['('] = ')';
		mp['{'] = '}';
		mp['['] = ']';

		for (char u : s)
		{
			if (mp[u])
				st.push(u);
			else if (st.size() && mp[st.top()] == u)
				st.pop();
			else
				return false;
		}
		if (st.size())
			return false;
		return true;
	}
};