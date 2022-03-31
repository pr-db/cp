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
		string s;
		cin >> s;
		n = s.size();
		vector<char> v;
		ll ans = 0;
		for (ll i = 0; i < n;)
		{
			if (i < n - 1 && s[i] == s[i + 1])
				i += 2;
			else
				v.push_back(s[i++]);
		}
		n = v.size();
		unordered_map<char, ll> mp;
		for (ll i = 0; i < n; i++)
		{
			mp[v[i]]++;
		}
		for (ll i = 0; i < v.size();)
		{
			if (mp[v[i]] != 2)
			{
				v.erase(v.begin() + i);
				ans++;
			}
			else
				i++;
		}
		for (ll i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout <<"\t\t\t"<< ans;
		cout << "\n";
	}
	return 0;
}
