#include <bits/stdc++.h>

using namespace std;

void func(int a[], int b[],int n,int m)
{
	for (int i = 0; i < n;)
	{
		for (int j = i; j < m;j++)
		{
			if(b[j]<a[i])
				swap(a[i], b[j]);
			else
				break;
		}
	}
}
int main()
{
	int n, m;
	int a[] = {1, 3, 5, 7};
	int b[] = {0, 2, 6, 8, 9};
	n = sizeof(a) / sizeof(a[0]);
	m = sizeof(b) / sizeof(b[0]);
	func(a, b,n,m);
	return 0;
}
