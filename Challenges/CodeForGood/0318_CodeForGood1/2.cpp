#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int maxPres(vector<int> &cs, vector<int> &ce)
{
	int ans = 1;
	int n = cs.size();
	vector<pair<int, int>> pres(n);
	for (int i = 0; i < n; i++)
		pres[i] = make_pair(ce[i], cs[i]);
	sort(pres.begin(), pres.end());
	for (int i = 1; i < n; i++)
		if (pres[i].second >= pres[i - 1].first)
			ans++;
	return ans;
}
int main()
{
	int n;
	cin >> n;
	vector<int> cs(n), ce(n);
	for (int i = 0; i < n; i++)
		cin >> cs[i];
	for (int i = 0; i < n; i++)
		cin >> ce[i];
	int res = maxPres(cs, ce);
	cout << res;

	return 0;
}
