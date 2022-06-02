#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
int main()
{
	FastIO;
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k = 0;
		cin >> n >> k;
		if (n % 2)
			if (k == 1 || k == 2)
				cout << "ODD";
			else
				cout << "EVEN";
		else
		{
			if (k == 2)
				cout << "ODD";
			else
				cout << "EVEN";
		}
		cout << "\n";
	}
	return 0;
}
