//input 65 64 37 85 24 67 35 76 56 32
#include <iostream>
#include <string.h>

using namespace std;

void swap(long long int *a, long long int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

long long int partition(long long int *arr, long long int low, long long int high)
{
    long long int index, pivot;
    pivot = high;
    index = low;
    for (long long int i = low; i < high; i++)
    {
        if (arr[i] < arr[pivot])
        {
            swap(&arr[i], &arr[index]);
            index++;
        }
    }
    swap(&arr[pivot], &arr[index]);

    return index;
}

long long int quicksort(long long int *arr, long long int low, long long int high)
{
    long long int pivot;
    if (low < high)
    {
        pivot = partition(arr, low, high);

        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long int n = 0;
        cin >> n;

        long long int A[n], ct = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        quicksort(A, 0, n - 1);
        for (long long int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }

        t--;
    }
    return 0;
}
