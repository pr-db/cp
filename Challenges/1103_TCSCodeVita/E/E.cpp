#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m1, m2;
	cin >> m1 >> m2;
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int t1 = 0;
	int t2 = 0;
	int idx = n - 1;
	while (idx >= 0)
	{
		if (t1 + m1 * a[idx] <= t2 + m2 * a[idx])
		{
			t1 += m1 * a[idx];
		}
		else
			t2 += m2 * a[idx];
		idx--;
	}
	int res = max(t1, t2);
	cout << res;
	return 0;
}