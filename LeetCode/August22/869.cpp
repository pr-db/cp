#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution
{
public:
	bool perm(vector<int> &a, int i)
	{
		if (i == a.size())
		{
			if (a[a.size() - 1] == 0)
				return false;
			long n = 0, ct = 1;
			for (int j = 0; j < a.size(); j++)
			{
				n += ct * a[j];
				ct *= 10;
			}
			if (log2(n) == int(log2(n)))
				return true;
			return false;
		}
		for (int j = i; j < a.size(); j++)
		{
			swap(a[i], a[j]);
			if (perm(a, i + 1))
				return true;
			swap(a[i], a[j]);
		}
		return false;
	}
	bool reorderedPowerOf2(int n)
	{
		vector<int> a;
		while (n)
		{
			a.push_back(n % 10);
			n /= 10;
		}
		return perm(a, 0);
	}
};