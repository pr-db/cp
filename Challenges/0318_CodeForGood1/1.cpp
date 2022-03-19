#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int cardPackets(vector<int> cardtypes)
{
	int n1 = 0;
	for (int i = 0; i < cardtypes.size(); i++)
		if (cardtypes[i] % 2)
			n1 += 1;
	int n2 = 0;
	int min_ = cardtypes[0];
	for (int i = 1; i < cardtypes.size(); i++)
	{
		if (cardtypes[i] < min_)
			min_ = cardtypes[i];
	}
	for (int i = 2; i < min_; i++)
	{
		if (min_ % i == 0)
		{
			min_ = i;
			break;
		}
	}
	for (int i = 0; i < cardtypes.size(); i++)
	{
		if (cardtypes[i] % min_ != 0)
		{
			n2 += (min_ - (cardtypes[i]) % min_);
		}
	}
	return min(n2, n1);
}

int main()
{
	int n;
	cin >> n;
	vector<int> ct(n);
	for (int i = 0; i < n; i++)
		cin >> ct[i];
	int res = cardPackets(ct);
	cout << res;

	return 0;
}
