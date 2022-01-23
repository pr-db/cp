#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int maxsubarray(int a[], int n)
{
	int max_so_far =0;
	int max_ending_here =0;
	int ans=0;
	for (int i = 0; i < n; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if(max_ending_here>max_so_far)
			max_so_far = max_ending_here;
		else if (max_ending_here < 0)
			max_ending_here = 0;
	}
	ans = max_so_far;
	return ans;
}
int main()
{
	int n;
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	n = sizeof(a) / sizeof(a[0]);

	int ans = maxsubarray(a, n);
	cout << ans;
	return 0;
}
