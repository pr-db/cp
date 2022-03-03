// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
bool firstOcc(vector<int> &a, int x, int i)
{
	return a[i] >= x;
}
bool SecondOcc(vector<int> &a, int x, int i)
{
	return a[i] > x;
}
vector<int> find(int a[], int n, int x)
{
	vector<int> ans(2);
	vector<int> ar;
	ar.push_back(INT_MIN);
	for (int i = 0; i < n; i++)
		ar.push_back(a[i]);
	ar.push_back(INT_MAX);
	int l = 0, r = n + 1, m;
	while (l + 1 < r)
	{
		m = l + (r - l) / 2;
		if (firstOcc(ar, x, m))
			r = m;
		else
			l = m;
	}
	ans[0] = r - 1;
	l = 0, r = n + 1, m;
	while (l + 1 < r)
	{
		m = l + (r - l) / 2;
		if (SecondOcc(ar, x, m))
			r = m;
		else
			l = m;
	}
	ans[1] = l - 1;
	if (ans[1] >= ans[0])
		return ans;
	else
	{
		ans[0] = -1;
		ans[1] = -1;
		return ans;
	}
}

// { Driver Code Starts.

int main()
{
	int n, x = 4;
	int arr[] = {1, 2, 3, 5, 6, 7, 8};
	n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	cout << "\n";
	vector<int> ans;
	ans = find(arr, n, x);
	cout << ans[0] << " " << ans[1] << endl;
	return 0;
}

// } Driver Code Ends