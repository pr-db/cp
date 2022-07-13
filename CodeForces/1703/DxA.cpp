#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

// absddccd

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<string> s(n);
		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
		}
		vector<string> v = s;
		unordered_map<string, int> mp;

		for (int i = 0; i < n; i++)
		{
			mp[s[i]] += 1;
		}

		string ans;
		for (int i = 0; i < n; i++)
		{
			bool flag = false;
			for (int j = 0; j < s[i].size(); j++)
			{
				string x = s[i].substr(0, j + 1);
				string y = s[i].substr(j + 1, s[i].size() - j - 1);

				if (mp.find(x) != mp.end() && mp.find(y) != mp.end())
				{
					ans += '1';
					flag = true;
					break;
				}
			}
			if (!flag)
			{
				ans += '0';
			}
		}

		cout << ans << "\n";
	}

	return 0;
}