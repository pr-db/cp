#include <bits/stdc++.h>

using namespace std;

vector<long long> maximumEvenSplit(long long finalSum)
{
	vector<long long> ans;
	if (finalSum % 2 != 0)
		return ans;
	long long sum = 0, i;
	for (i = 2;; i += 2)
	{
		sum += i;
		if (sum <= finalSum)
			ans.push_back(i);
		else
			break;
	}
	long long n = ans.size();
	if (sum > finalSum)
		ans[n - 1] += finalSum - sum + i;
	return ans;
}

int main()
{

	return 0;
}