#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Solution
{
public:
	int FindMaxSum(int arr[], int n)
	{
		int prev2 = 0;
		int prev = arr[0];
		for (int i = 1; i < n;i++)
		{
			int curr = max(prev2 + arr[i], prev);
			prev2 = prev;
			prev = curr;
		}
			return prev;
	}
};
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	Solution ob;
	cout << ob.FindMaxSum(a, n) << endl;
	return 0;
}