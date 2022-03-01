#include <bits/stdc++.h>
using namespace std;
long long int merge(long long int a[],long long int l, long long int m, long long int h)
{
	long long int i = l, j = m, k = 0;
	long long int ans = 0;
	long long int temp[h - l+1];
	for (long long int x = 0; x < h - l + 1;x++)
		temp[x] = a[x + l];
	while((i<m)&&(j<=h))
	{
		if(a[i]<=a[j])
			temp[k++] = a[i++];
		else
		{
			temp[k++] = a[j++];
			ans += m - i;
		}
	}
	while(i<m)
		temp[k++] = a[i++];
	while(j<=h)
		temp[k++] = a[j++];
	for (long long int x = 0; x < h - l + 1;x++)
		a[l + x] = temp[x];
	return ans;
}
long long int mergeSort(long long int a[],long long int l,long long int h)
{
	long long int ans = 0;
	long long int m;
	if(l<h)
	{
		m = l + (h - l) / 2;
		ans += mergeSort(a, l, m);
		ans += mergeSort(a, m + 1, h);
		ans += merge(a, l, m + 1, h);
	}
	return ans;
}
int main()
{
	long long int n, ans;
	long long int a[] = {8, 4, 2, 1};
	n = sizeof(a) / sizeof(a[0]);
	ans = mergeSort(a, 0,n-1);
	for (long long int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n"
		 << ans;
	return 0;
}
