#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int func(int a[], int n)
{
	int ans = 0, ct = 0, previ = -1;
	for (int i = 0; i < n-1;)
	{
		if (previ != i)
			ct++;
		else
		{
			ct = -1;
			break;
		}
		previ = i;
		i += a[i];
		//cout << "i " << i << " previ " << previ;
	}
	ans = ct;
	return ans;
}
int main()
{
	int n, k;
	int a[] = {1, 4, 3, 2, 6, 7};
	n = sizeof(a) / sizeof(a[0]);
	k = 5;
	int ans = func(a, n);
	cout << ans;
	return 0;
}
