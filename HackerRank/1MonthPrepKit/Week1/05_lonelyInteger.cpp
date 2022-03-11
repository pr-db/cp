#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int lonelyinteger(vector<int> &a)
{
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size();)
	{
		int j = i, count = 0;
		while (j < a.size())
			if (a[j] == a[i])
			{
				j++;
				count++;
			}
			else
				break;
		if (count == 1)
			return a[i];
		i = j;
	}
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n;i++)
		cin >> a[i];
		int ans = lonelyinteger(a);
	cout << ans;
	return 0;
}

