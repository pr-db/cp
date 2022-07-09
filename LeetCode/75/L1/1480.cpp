#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int pivotIndex(vector<int> &a)
{
	int sum = 0;
	int n = a.size();
	for (int i = 0; i < a.size(); i++)
	{
		sum += a[i];
		a[i] = sum;
	}
	for (int i = 0; i < a.size(); i++)
	{
		ll sl = 0, sr = 0;
		if (i > 0)
			sl = a[i - 1];
		sr = a[n - 1] - a[i];
		if(sr==sl)
			return i;

	}
	return -1;
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
