#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		ll ans = -1;
		string s;
		cin >> s;
		ll n = s.size();
		ll now = 0;
		for (int i = 1; i < n-1; i++)
		{
			if(s[i]==s[0]||s[i]==s[n-1])
				now = 0;
			else
				now++;
			ans = max(now, ans);
		}
		if (ans ==0)
			ans = -1;
		cout << ans << "\n";
	}
	return 0;
}
