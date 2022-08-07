#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	vector<vector<int>> mergeSimilarItems(vector<vector<int>> &a, vector<vector<int>> &b)
	{
		map<int, int> mp;
		for (int i = 0; i < a.size(); i++)
			mp[a[i][0]] += a[i][1];
		for (int i = 0; i < b.size(); i++)
			mp[b[i][0]] += b[i][1];
		vector<vector<int>> ans;
		for (auto u : mp)
		{
			vector<int> temp(2);
			temp[0] = u.first;
			temp[1] = u.second;
			ans.push_back(temp);
		}
		return ans;
	}
};