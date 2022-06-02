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
		ll n, k;
		cin >> n >> k;
		if (n % 2)
			if (k % 2)
				cout << "Yes";
			else
				cout << "No";
		else
			cout << "Yes";
		cout << "\n";
	}
	return 0;
}
