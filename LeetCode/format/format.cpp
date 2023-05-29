#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// vector<int> func(vector<int> &a);
int func(vector<int> &a);

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int ans = func(a);
	cout << ans;

	// vector <int> ans = func(a);
	// for (int i = 0; i < ans.size(); i++)
	// 	cout << ans[i]<<" ";
	return 0;
}
