#include <bits/stdc++.h>

using namespace std;

long long goodTriplets(vector<int> &nums1, vector<int> &nums2)
{
	long long ans = 0;
	long long n = nums1.size();
	for (int i = 0; i < n; i++)
	{
		int i1 = -1, j = -1;
		for (int x = 0; x < n; x++)
		{
			if (nums2[x] == nums1[i])
				j = x;
		}
		if (j > n - 3 || j < 0)
			continue;
		else
			i1 = j;
		j++;
		for (; j < n; j++)
		{
			int i2 = -1, k = -1;
			for (int x = 0; x < n; x++)
			{
				if (nums1[x] == nums2[j])
					k = x;
			}
			if (k > n - 2 || k < 0)
				continue;
			else
				i2 = k;
			k++;
			for (; k < n; k++)
			{
				int i3 = -1, m = -1;
				for (int x = 0; x < n; x++)
				{
					if (nums2[x] == nums1[k])
						m = x;
				}
				if (m > n - 1 || m < 0)
					continue;
				else
					i3 = m;
				if (i1 >= 0 && i2 >= 0 && i3 >= 0)
					ans++;
			}
		}
	}
	return ans;
}

int main()
{

	return 0;
}