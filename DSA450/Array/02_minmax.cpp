#include <iostream>
#include <cstdlib>
#include <string>
#include <set>

using namespace std;

struct Pair
{
	int max;
	int min;
};

Pair getminmax(int arr[],int n)
{
	Pair minmax = {0,0};
	int i = 0;
	if(n%2 ==0)
	{
		if(arr[0]>=arr[1])
		{
			minmax.max = arr[0];
			minmax.min = arr[1];
		}
		else
		{
			minmax.max = arr[1];
			minmax.min = arr[0];
		}
		i += 2;
		//cout << "hiii";
	}
	else
	{
		minmax.max = arr[0];
		minmax.min = arr[0];
		i += 1;
		//cout << "hi";
	}

	while(i<n)
	{
		if (arr[i] >= arr[i+1])
		{
			if(arr[i]>= minmax.max)
				minmax.max = arr[i];
			if(arr[i+1]<=minmax.min)
				minmax.min = arr[i + 1];
		}
		else
		{
			if (arr[i+1] >= minmax.max)
				minmax.max = arr[i+1];
			if (arr[i ] <= minmax.min)
				minmax.min = arr[i ];

		}
		i += 2;
	}
	//cout << i;
	return minmax;
} 
int main()
{
	int n;
	// cin >> n;
	// int a[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	cin >> a[i];
	// }
	int b[] = {1, 2, 3, 4, 5, 6, -1, 42, 1, 4, 0, 13, 41, 4, -22};
	Pair mm = getminmax(b, 15);
	cout << mm.max << " " << mm.min;
	return 0;
}
