#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution
{
public:
	int arithmeticTriplets(vector<int> &a, int k)
	{
		int n = a.size();
		int ans = 0;
		for (int i = 1, j = 1; i < n && j < n;)
		{
			if (a[i] - a[i - j] < k)
				i++, j++;
			else if (a[i] - a[i - j] == k)
			{
				for (int l = i; l < n; l++)
					if (a[l] - a[i] == k)
						ans++;
					else if (a[l] - a[i] > k)
						break;
				i++, j++;
			}
			else
				j--;
		}
		return ans;
	}
};