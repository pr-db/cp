#include <bits/stdc++.h>

using namespace std;

vector<long long> sumOfThree(long long num)
{
	vector<long long> ans;
	if (num % 3 == 0)
	{
		ans.push_back((num / 3) - 1);
		ans.push_back(num / 3);
		ans.push_back((num / 3) + 1);
	}
	return ans;
}

int main()
{

	return 0;
}