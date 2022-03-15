#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<vector<int>> fourSum(vector<int> &arr, int x)
	{
		int n = arr.size(), as = 0, prevnum = INT_MAX, previ = INT_MAX, prevj = INT_MAX, prevk = INT_MAX;
		vector<vector<int>> ans;
		sort(arr.begin(), arr.end());
		// for (int i = 0; i < n; i++)
		// 	cout << arr[i] << " ";
		// cout << "\n\n";
		for (int i = 0; i < n; i++)
		{
			if (previ != arr[i])
				for (int j = i + 1; j < n; j++)
				{
					if (prevj != arr[j])
						for (int k = j + 1; k < n; k++)
						{
							int num = x - arr[i] - arr[j] - arr[k];
							if (binary_search(arr.begin() + k + 1, arr.end(), num))
							{
								vector<int> ansv;
								ansv.push_back(arr[i]);
								ansv.push_back(arr[j]);
								ansv.push_back(arr[k]);
								ansv.push_back(num);
								if (as == 0)
								{
									ans.push_back(ansv);
									as++;
								}
								else
								{
									if (ans[as - 1][0] != ansv[0] || ans[as - 1][1] != ansv[1] || ans[as - 1][2] != ansv[2] || ans[as - 1][3] != ansv[3])
									{
										ans.push_back(ansv);
										as++;
									}
								}
							}
						}
					prevj = arr[j];
				}
			previ = arr[i];
		}
		return ans;
	}
};

int main()
{
	int n, k, i;
	cin >> n >> k;
	vector<int> a(n);
	for (i = 0; i < n; i++)
		cin >> a[i];
	Solution ob;
	vector<vector<int>> ans = ob.fourSum(a, k);
	for (auto &v : ans)
	{
		for (int &u : v)
		{
			cout << u << " ";
		}
		cout << "$";
	}
	if (ans.empty())
	{
		cout << -1;
	}
	cout << "\n";

	return 0;
}