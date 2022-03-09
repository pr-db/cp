#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int majorityElement(int a[], int n)
{
	int ans=-1,ct=0;
	sort(a, a + n);
	if(n==1)
		return a[0];
	for (int i = 1; i < n; i++)
	{
		if(a[i]==a[i-1])
		{
			ct++;
			if(ct>=n/2)
			{
				ans = a[i];
				break;
			
			}
		}
		else
			ct = 0;
	}
	return ans;
}
int main()
{
	int n, k;
	int a[] = {3, 1, 3, 1,0, 2};
	n = sizeof(a) / sizeof(a[0]);
	k = 5;
	int ans = majorityElement(a, n);
	cout << ans;
	return 0;
}
