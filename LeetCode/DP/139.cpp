#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	bool wordBreak(string s, vector<string> &word)
	{

		vector<bool> v(s.size() + 1);
		int longest = 0;
		if (!word.size())
			return false;
		for (int i = 0; i < word.size(); i++)
			longest = max(longest, int(word[i].size()));

		v[0] = 1;

		for (int i = 1; i <= s.size(); i++)
			for (int j = i - 1; j >= max(0, i - longest); j--)
				if (v[j])
				{
					string sub = s.substr(j, i - j);
					for (auto u : word)
						if (u == sub)
						{
							v[i] = 1;
							break;
						}
				}
		// for(int i=0;i<=s.size();i++)
		//     cout<<v[i]<<" ";
		// cout<<"\n";
		if (v[s.size()])
			return true;
		return false;
	}
};