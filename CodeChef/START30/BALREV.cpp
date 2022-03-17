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
		cin >> n;
		string a;
		cin >> a;
		for (ll i = 0; i < n;i++)
		if(a[i]=='0')
			k++;
		for (ll i = 0; i < k;i++)
			a[i] = '0';
		for (ll i = k; i < n;i++)
			a[i] = '1';
		cout << a << "\n";
	}
	return 0;
}
