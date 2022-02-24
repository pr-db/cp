#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll maxSubarraySum(ll a[], ll n)
{
	ll max_so_far = *max_element(a, a + n);
	ll max_ending_here = 0;
	ll ans = 0;
	for (ll i = 0; i < n; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if (max_ending_here > max_so_far)
			max_so_far = max_ending_here;
		else if (max_ending_here < 0)
			max_ending_here = 0;
	}
	ans = max_so_far;
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t > 0)
	{
		ll n, x;
		cin >> n >> x;
		ll a[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (ll k = 0; k <= n;k++)
		{
			int fk;
			if(k==0)
				fk = *max_element(a, a + n);
			else if(k==1)
			cout << fk << " ";
		}

			t--;
	}
	return 0;
}
