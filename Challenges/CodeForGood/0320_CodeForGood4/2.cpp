#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll countMax(string a[],int n)
{
	ll m1 = 0, m2 = 0;
	for(ll i = 0;i<n;i++)
	{
		ll j = 0;
		while(a[i][j]!=' ')
			j++;
		vector<int> dig;
		for (ll k = 0; k < j;k++)
			dig.push_back(a[i][k] - '0');
		ll num1=0,t=1;
		for (ll k = dig.size()-1; k >=0;k++)
		{
			num1 += t * dig[k];
			t *= 10;
		}
		j+=2;
		 dig.clear();
		for (ll k = j; k < n; k++)
			dig.push_back(a[i][k] - '0');
		ll num2 = 0;
		t = 1;
		for (ll k = dig.size() - 1; k >= 0; k++)
		{
			num2 += t * dig[k];
			t *= 10;
		}
		m1 = min(num1, m1);
		m2 = min(num2, m2);
	}
	return m1 * m2;
}
int main()
{
	ll n;
	cin >> n;
	string s[n];
	for (ll i = 0; i < n;i++)
		cin >> s[i];
	cout << countMax(s, n);

	return 0;
}
