#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int uniqueMorseRepresentations(vector<string> &words)
	{
		vector<string> s = {{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."}};

		unordered_set<string> st;

		for (auto u : words)
		{
			string tmp = "";
			for (auto c : u)
				tmp += s[c - 'a'];
			st.insert(tmp);
		}
		return st.size();
	}
};