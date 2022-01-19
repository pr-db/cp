#include <iostream>
#include <cstdlib>
#include <string>
#include <set>

using namespace std;

void revArray(int a[], int start, int end)
{
	int temp = 0;
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i];
	}
}
int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	int size;
	cin >> size;
	int a[size];
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	revArray(a, 0, size - 1);
	printArray(a, size);

	return 0;
}
