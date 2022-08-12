#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<int> asteroidCollision(vector<int> &a)
	{
		stack<int> s;
		vector<int> ans;
		s.push(a[0]);
		for (int i = 1; i < a.size(); i++)
			if (a[i] > 0 || s.empty())
				s.push(a[i]);
			else
			{
				while (s.size() && s.top() > 0 && s.top() < abs(a[i]))
					s.pop();
				if (s.size() && s.top() == abs(a[i]))
					s.pop();
				else if (s.empty() || s.top() < 0)
					s.push(a[i]);
			}
		while (s.size())
			ans.push_back(s.top()), s.pop();
		reverse(ans.begin(), ans.end());
		return ans;
	}
};