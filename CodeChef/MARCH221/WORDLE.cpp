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
		string s, t,ans;
		cin >> s >> t;
		for (int i = 0; i < 5;i++)
		{
			if(s[i]==t[i])
				ans.push_back('G');
			else
				ans.push_back('B');
		}
		cout << ans << "\n";
	}
	return 0;
}
