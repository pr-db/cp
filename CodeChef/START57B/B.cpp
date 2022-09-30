#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
#define nl cout << "\n";
int main()
{
	FastIO;
	ll t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		string ans="Yes";
		if (a % 2 && b % 2)
			ans = "No";
		else 
		{
			if(b%2)
				swap(a, b);
			if(a<2)
				ans = "No";

		}
		cout << ans;
		cout << "\n";
	}
	return 0;
}
