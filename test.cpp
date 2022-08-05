#include <bits/stdc++.h>
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)

int solve(vector<int> a, int k)
{

	int n = a.size();
	int maxi = INT_MIN,sum=0;
	for (int i = 0; i < n; i++)
	{
		maxi = max(maxi, a[i]);
		sum += a[i];
	}
	sum -= maxi;
	maxi = max(0, maxi - k);
	sum += maxi;
	return sum+1;
}

int main()
{
	FastIO;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int k;
	cin >> k;
	cout << solve(a, k);

	return 0;
}
