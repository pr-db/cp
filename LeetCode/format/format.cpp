#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<int> func(vector<int> &a)
{
	int ans = 0;
	for (int i = 0; i < a.size();i++)
	{
		ans += a[i];
		a[i] = ans;
	}
	return a;
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
