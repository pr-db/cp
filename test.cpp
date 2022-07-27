#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)

long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	long long cs = 0;
	long long ms = INT64_MIN;
	for (long long i = 0; i < (n); i++)
	{
		cs = cs + arr[i % n];
		ms = max(ms, cs);
		if (cs < 0)
			cs = 0;
	}
	cs = 0;
	long long ms2 = INT64_MIN;
	for (long long i = 0; i < (min(2, k) * n); i++)
	{
		cs = cs + arr[i % n];
		ms2 = max(ms2, cs);
		if (cs < 0)
			cs = 0;
	}
	cs = 0;
	long long ms3 = INT64_MIN;
	for (long long i = 0; i < (min(3, k) * n); i++)
	{
		cs = cs + arr[i % n];
		ms3 = max(ms3, cs);
		if (cs < 0)
			cs = 0;
	}

	if (ms2 > ms)
		if (ms3 > ms2)
			ms = ms2+ ((k - 2) * (ms3 - ms2));
	if (ms3 == ms2)
		ms = ms2;

	return ms;
}
int main()
{
	FastIO;
	ll t;
	cin >> t;
	while (t--)
	{
		int n, k = 0;
		cin >> n>>k;
		vector<int> a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		cout << maxSubSumKConcat(a, n, k);
		cout << "\n";
	}
	return 0;
}
