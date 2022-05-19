#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
	if (a.second > b.second)
		return true;
	return false;
}
int maxunit(vector<int> &box, vector<int> &unit, int t)
{
	int n = box.size();
	int ans=0;
	vector<pair<int, int>> tr;
	for (int i = 0; i < n; i++)
		tr.push_back(make_pair(box[i], unit[i]));
	sort(tr.begin(), tr.end(), cmp);
	int i = 0;
	while (t)
	{
		if (t >= tr[i].first)
		{
			t -= tr[i].first;
			ans += (tr[i].second * tr[i].first);
			i++;
		}
		else
		{
			ans += (tr[i].second * t);
			t = 0;
		}
	}
	return ans;
}
int main()
{
	int n, t;
	cin >> n;
	vector<int> box(n), unit(n);
	for (int i = 0; i < n; i++)
		cin >> box[i];
	for (int i = 0; i < n; i++)
		cin >> unit[i];
	cin >> t;
	int res = maxunit(box, unit, t);
	cout << res;

	return 0;
}
