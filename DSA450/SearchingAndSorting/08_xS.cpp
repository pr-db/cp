#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// using Moore’s Voting Algorithm
int majorityElement(int a[], int n)
{
	int ans = -1, majority_index = 0, ct = 1;

	for (int i = 1; i < n; i++)
	{
		if (a[i] == a[majority_index])
			ct++;
		else
			ct--;
		if (ct == 0)
		{
			majority_index = i;
			ct++;
		}
	}
	ct = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == a[majority_index])
			ct++;
	if (ct >= n / 2)
		ans = a[majority_index];
	return ans;
}
int main()
{
	int n, k;
	int a[] = {3, 1, 3, 1, 0, 2};
	n = sizeof(a) / sizeof(a[0]);
	k = 5;
	int ans = majorityElement(a, n);
	cout << ans;
	return 0;
}
