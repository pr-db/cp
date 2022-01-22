#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void sort012(int a[], int n)
{
	int ct[3] = {0}, i = 0;
	cout << n << "\n";
	for (i = 0; i < n; i++)
	{
		if (a[i] == 0)
			ct[0]++;
		else if (a[i] == 1)
			ct[1]++;
		else if (a[i] == 2)
			ct[2]++;
	}
	i = 0;
	while (ct[0])
	{
		a[i] = 0;
		i++;
		ct[0]--;
	}
	while (ct[1])
	{
		a[i] = 1;
		i++;
		ct[1]--;
	}
	while (ct[2])
	{
		a[i] = 2;
		i++;
		ct[2]--;
	}
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
int main()
{
	int n;

	int b[] = {0,2, 1, 2, 0};
	n = sizeof(b) / sizeof(b[0]);
	sort012(b, n);
	

		return 0;
}
