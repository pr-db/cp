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
		string s;
		s.push_back('1');
		for (ll i = 0; i < n - 2;i++)
			s.push_back('0');
		s.push_back('1');
		cout << s;

		cout << "\n";
	}
	return 0;
}
