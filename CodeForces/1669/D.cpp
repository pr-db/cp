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
		string s;
		cin >> s;
		vector<string> a;
		ll c = 1;
		ll i = 0;
		while (i < n)
		{
			string temp;
			while (s[i] != 'W' && i < n)
			{
				temp.push_back(s[i++]);
			}
			if(temp.size()!=0)
			a.push_back(temp);
			i++;
		}
		// cout << a.size() << " ";
		for (ll i = 0; i < a.size(); i++)
		{
			ll ctb = 0, ctr = 0;
			for (ll j = 0; j < a[i].size(); j++)
			{
				if (a[i][j] == 'B')
					ctb++;
				else
					ctr++;
				// cout << a[i][j];
			}
			// cout << " ";
			if (ctr != 0 && ctb != 0)
				continue;
			else
			{
				c = 0;
				break;
			}
		}
		if (c)
			cout << "YES";
		else
			cout << "NO";
		cout << "\n";
	}
	return 0;
}
