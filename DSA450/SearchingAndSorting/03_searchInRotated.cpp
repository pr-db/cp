#include <bits/stdc++.h>

using namespace std;
bool pivot(vector<int> &a, int i, int j)
{
	return a[i] < a[j];
}
int findPivot(vector<int> &a, int l, int h)
{
	int m;
	while (l + 1 < h)
	{
		m = l + (h - l) / 2;
		if (pivot(a, l, m))
			l = m;
		else
			h = m;
	}
	return l;
}
int findTarget(vector<int> &a, int l, int h, int target)
{
	int m;
	vector<int> ar;
	ar.push_back(INT_MIN);
	for (int i = l; i <= h; i++)
		ar.push_back(a[i]);
	ar.push_back(INT_MAX);
	l = 0, h = ar.size() - 1;
	while (l + 1 < h)
	{
		m = l + (h - l) / 2;
		if (ar[m] < target)
			l = m;
		else
			h = m;
		}
	if (ar[h] == target)
		return h-1;
	else
		return -1;
}
int search(vector<int> &nums, int target)
{
	int ans1, ans2, n;
	n = nums.size();
	int p = findPivot(nums, 0, n - 1);
	ans1 = findTarget(nums, 0, p, target);
	ans2 = findTarget(nums, p + 1, n - 1, target);
	if(ans2>=0)
		ans2 += p + 1;
	return max(ans1, ans2);
}

int main()
{
	int n, k;
	vector<int> a = {4, 5, 6, 7, 0, 1, 2, 3};
	n = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < a.size(); i++)
	{
		int ans = search(a, a[i]);
		cout << ans << " ";
	}
	return 0;
}
