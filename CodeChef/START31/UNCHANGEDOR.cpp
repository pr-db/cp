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
		ll n;
		cin >> n;
		// for (ll i = 1; i < n; i++)
		// {
		// 	ll k = log2(i);
		// 	ll m = i - pow(2, k);
		// 	 cout << k << " " << m << "  ";
		// 	cout <<i<<" "<< pow(2, k ) - 1*(k+1) + m;
		// 	cout << "\n";
		// }

		
		ll k = log2(n);
		ll m = n - pow(2, k);
		cout << k << " " << m << "  ";
		
		cout << ll(pow(2, k) - 1 * (k + 1) + m);
		cout << "\n";
	}
	return 0;
}
