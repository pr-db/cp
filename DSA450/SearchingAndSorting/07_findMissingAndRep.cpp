#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int *findTwoElement(int *a, int n)
{
	int *ans = new int[2];
	for (int i = 0; i < n; i++)
		while (a[i] != i + 1)
			if(a[i]==a[a[i]-1])
				break;
			else
				swap(a[i], a[a[i] - 1]);
	for (int i = 0; i < n; i++)
		if (a[i] != i + 1)
		{
			ans[0] = a[i];
			ans[1] = i + 1;
		}
	return ans;
}
int main()
{
	int n, k;
	int a[] = {2, 6, 3,4, 7, 5, 3, 1};
	n = sizeof(a) / sizeof(a[0]);
	k = 5;
	int *ans = findTwoElement(a, n);
	cout << *ans << " " << *ans++;
	return 0;
}
