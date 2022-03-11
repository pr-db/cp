#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int findPair(int a[], int size, int n)
{
	int ans=0;
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{

	}
	return ans;
}
int main()
{
	int n, k;
	int a[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
	n = sizeof(a) / sizeof(a[0]);
	k = 5;
	int ans = findPair(a, n, k);
	cout << ans;
	return 0;
}
