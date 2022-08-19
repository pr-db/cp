#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	int minSetSize(vector<int> &a)
	{
		map<int, int> m;
		vector<int> v;
		for (auto u : a)
			m[u]++;
		for (auto u : m)
			v.push_back(u.second);
		sort(v.begin(), v.end(), greater<int>());
		int n = a.size() / 2, ans = 0;
		for (auto u : v)
		{
			n -= u;
			ans++;
			if (n <= 0)
				break;
		}
		return ans;
	}
};


#include <bits/stdc++.h>
typedef long long ll;
using namespace std;