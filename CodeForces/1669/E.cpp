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
		vector<string> a;
		vector<ll> v(11);
		vector<vector<ll>> x;
		string s;
		map<string, ll> mp;
		for (ll i = 97; i < 108; i++)
			s.push_back(i);

		for (ll i = 0; i < n; i++)
		{
			string temp;
			cin >> temp;
			if(temp[0]>temp[1])
				swap(temp[0], temp[1]);
			a.push_back(temp);
			mp[temp]++;
		}
		for (auto i : mp)
			if(i.second>1)


			sort(a.begin(), a.end());
		for (ll i = 1; i < a.size(); i++)
			if (a[i].compare(a[i - 1]))
				a.erase(a.begin() + i);
		n = a.size();
		for (ll i = 0; i < n; i++)
		{

			for (ll j = 0; j < 11; j++)
			{
				if (a[i][0] == s[j])
					v[j]++;
				else if (a[i][1] == s[j])
					v[j]++;
			}
		}
		ll ans = 0;
		for (ll i = 0; i < 11; i++)
		{
			cout << (v[i] * (v[i] - 1)) / 2 << " ";
			ans += (v[i] * (v[i] - 1)) / 2;
		}
		cout << ans << "\n";
	}
	return 0;
}
