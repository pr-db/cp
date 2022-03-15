#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool findPair(int a[], int n, int k)
{
	sort(a, a + n);
	for (int i = 0; i < n; i++)
		if (binary_search(a + i, a + n, k + a[i]))
			return true;
	return false;
}
int main()
{
	int n, k;
	int a[] = {5, 20, 3, 2, 5, 80};
	n = sizeof(a) / sizeof(a[0]);
	k = 78;
	int ans = findPair(a, n, k);
	cout << ans;
	return 0;
}
