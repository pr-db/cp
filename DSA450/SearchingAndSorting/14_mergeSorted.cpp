#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void merge(int a[],int b[], int n, int m)
{
	for (int i = 0,j=0; i < n &&j<m;)
	{
		if(a[i]<=b[j])
			i++;
		else
		{
			swap(a[i++], b[j]);
		}
		
	}
}
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	merge(a, b, n, m);
	for (int i = 0; i < n; i++)
		cout << a[i];
	for (int i = 0; i < m; i++)
		cout << b[i];
	return 0;
}
