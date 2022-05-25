#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll dig = log10(n) + 1;
		vector<ll> a(dig);
		ll num = n;
		ll mn = INT_MAX;
		for (ll i = dig - 1; i >= 0; i--, num /= 10)
		{
			a[i] = num % 10;
			if (a[i] < mn)
				mn = a[i];
		}
		if(dig>2)
			cout << mn;
		else if(dig==2)
			cout << a[1];
		else
			cout << a[0];
		cout << "\n";
	}
	return 0;
}
