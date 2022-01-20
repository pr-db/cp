#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int partition(int a[],int low, int high)
{
	int pivot = high, index = low;
	for (int i = low; i < high;i++)
	{
		if(a[i]<a[pivot])
		{
			swap(a[i], a[index]);
			index++;
		}
	}
	swap(a[index], a[pivot]);
	return index;
}

void quicksort(int a[],int low,int high)
{
	int pivot;
	if(low<high)
	{
		pivot = partition(a, low, high);
		quicksort(a, low, pivot - 1);
		quicksort(a, pivot + 1, high);
	}

}
int kthSmallest(int arr[], int l, int r, int k)
{
	quicksort(arr, 0,r);
	return arr[k - 1];
}
int main()
{
	int n;
	
	int b[] = {1, 2, 3, 4, 5, 6, -1, 42, 1, 4, 0, 13, 41, 4, -22};
	n= sizeof(b) / sizeof(b[0]);
	int kth = kthSmallest(b, 0, n - 1, 5);
	cout << kth;
	return 0;
}
