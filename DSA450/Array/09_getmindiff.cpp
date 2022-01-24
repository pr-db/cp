#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int getmindiff(int a[], int n, int k)
{
	int ans;
	int avg = accumulate(a, a + n, 0) / n;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < avg)
			a[i] += k;
		else if (a[i] > avg)
			if (a[i] - k >= 0)
				a[i] -= k;
			else
				a[i] += k;
		else
			a[i] += k;
	}
	ans = avg;
	return ans;
}
int main()
{
	int n, k;
	int a[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
	n = sizeof(a) / sizeof(a[0]);
	k = 5;
	int ans = getmindiff(a, n, k);
	cout << ans;
	return 0;
}
