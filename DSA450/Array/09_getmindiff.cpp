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
	int ans = a[n - 1] - a[0];
	int smallest = a[0] + k;
	int largest = a[n - 1] - k;
	int mini, maxi;
	for (int i = 0; i < n - 1; i++)
	{
		mini = min(smallest, a[i + 1] - k);
		maxi = max(largest, a[i] + k);
		if(mini<0)
			continue;
		ans = min(ans, maxi - mini);
	}
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
