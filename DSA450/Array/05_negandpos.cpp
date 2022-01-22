#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void negpos(int a[], int n)
{
	int index =0;
	for (int i = 0; i < n;i++)
	{
		if(a[i]<0)
		{
			swap(a[i], a[index]);
			index++;
		}
	}
}
int main()
{
	int n;

	int b[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
	n = sizeof(b) / sizeof(b[0]);
	negpos(b, n);
	for (int i = 0; i < n;i++)
	{
		cout << b[i] << " ";
	}
		return 0;
}
