#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll bi2de(string s)
{
	ll dec = 0;
	ll b = 1;
	ll n = s.size();
	for (ll i = n - 1; i >= 0; i--)
	{
		if (s[i] == '1')
			dec += b;
		dec %= 998244353;
		b *= 2;
		b %= 998244353;
	}
	return dec % 998244353;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		string s;
		ll n;
		cin >> n;
		cin >> s;
		string ans;
		vector<ll> ps(n);
		ll pss = 0;
		if (s[n - 1] == '1')
			ps[n - 1]++;
		pss += ps[n - 1];
		for (ll i = n - 2; i >= 0; i--)
		{
			if (s[i] == '1')
				ps[i] += ps[i + 1] + 1;
			else
				ps[i] += ps[i + 1];
			pss += ps[i];
		}
		if (pss % 2)
			ans.push_back('1');
		else
			ans.push_back('0');
		for (ll i = 1; i < n; i++)
		{
			pss -= ((int)s[n - i] - 48) * (n - i + 1);
			if (pss % 2)
				ans.push_back('1');
			else
				ans.push_back('0');
		}
		reverse(ans.begin(), ans.end());
		cout << bi2de(ans) % 998244353 << "\n";
	}
	return 0;
}
