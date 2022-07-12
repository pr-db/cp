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
		ll x, y;
		cin >> x >> y;
		ll n, m;
		if (x >=y)
			n = x;
		else
			n = y;
		cin >> x >> y;
		if (x >= y)
			m = x;
		else
			m = y;
		
		if(n>m)
			cout << "Q";
		else if(m>n)
			cout << "P";
		else
			cout << "TIE";
		cout << "\n";
	}
	return 0;
}
