#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t > 0)
	{
		ll n, k = 0;
		cin >> n;
		vector<ll> a(n);
		
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] % 7 != 0)
				if ((a[i] + 1) % 7 != 0)
					k++;
		}
		cout << k << "\n";
		t--;
	}
	return 0;
}
