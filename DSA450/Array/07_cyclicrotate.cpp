#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void cyclicrotate(int a[], int n)
{
	for (int i = n-1; i >0; i--)
	{
		swap(&a[i], &a[i - 1]);
	}
}
int main()
{
	int n;
	int a[] = {85, 25, 1, 32, 54, 6};
	n = sizeof(a) / sizeof(a[0]);

	cyclicrotate(a, n);
	for (int i = 0; i < n;i++)
	{
		cout << a[i]<<" ";
	}
		return 0;
}
