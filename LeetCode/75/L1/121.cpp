#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int maxProfit(vector<int> &a)
{
	int mn = INT_MAX;
	int ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		mn = min(a[i], mn);
		ans = max(ans, a[i] - mn);
	}
	return ans;
}
int main()
{
	int n;
	vector<int> a = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
	n = a.size();
	// int ans = func(a);
	// cout << ans;
	return 0;
}
