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
		cin >> s;
		ll ct = 0;
		for (ll i = 0; i < n; i++)
			if (s[i] == '1')
				ct++;
		string ans;
		if (ct >= (n - ct))
			for (ll i = 0; i < ct;i++)
				ans += '1';
		else
			for (ll i = 0; i < n-ct; i++)
				ans += '0';
		cout<<ans<< "\n";
	}
	return 0;
}
