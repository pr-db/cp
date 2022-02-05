#include <bits/stdc++.h>

using namespace std;

int func(int a[], int n)
{
	int maxReach = a[0];
	int stepsFromCurrent = a[0];
	int jump = 1;
	if (n == 1)
		return 0;
	else if (a[0] == 0)
		return -1;
	else
	{
		for (int i = 1; i < n-1; i++)
		{
			maxReach = max(maxReach, i + a[i]);
			stepsFromCurrent--;
			if (stepsFromCurrent == 0)
			{
				jump++;
				if (i >= maxReach)
					return -1;
				stepsFromCurrent = maxReach - i;
			}
		}
		return jump;
	}
}

// ********************************** Recursive O(n) solution **********************************
// int minJumps(int arr[], int n)
// {
// 	if (n == 1)
// 		return 0;
// 	int res = INT_MAX;
// 	for (int i = n - 2; i >= 0; i--)
// 	{
// 		if (i + arr[i] >= n - 1)
// 		{
// 			int sub_res = minJumps(arr, i + 1);
// 			if (sub_res != INT_MAX)
// 				res = min(res, sub_res + 1);
// 		}
// 	}
// 	return res;
// }

// ********************************** O(n ^ 2) solution **********************************
// int minJumps(int arr[],int n){
// 	int dp[n];
// 	fill_n(dp, n, INT_MAX);
// 	dp[0] = 0;
// 	for (int i = 1; i < n;i++)
// 	{
// 		for (int j = 0; j < i;j++)
// 		{
// 			if(dp[j]!=INT_MAX && arr[j]+j>=i)
// 			{
// 				cout << "if1"
// 					 << " ";
// 				if(dp[j]+1<dp[i])
// 				{
// 					dp[i] = dp[j] + 1;
// 					cout << "if2"
// 						 << " ";
// 				}
// 			}
// 		}
// 		cout << "  nl \n";
// 	}
// 	if(dp[n-1]!=INT_MAX)
// 		return dp[n-1];
// 	else
// 		return -1;
// }
int main()
{
	int n, k;
	int a[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
	n = sizeof(a) / sizeof(a[0]);
	k = 5;
	int ans = func(a, n);
	cout << ans;
	return 0;
}
