#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
#define nl cout << "\n";
int main()
{
	FastIO;
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k = 0;
		cin >> n;
		string s;
		cin >> s;
		vector<int> a(10);
		int b = 0, c = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '-')
				c++;
			else if (s[i] == '+')
				b++;
			else
				a[s[i] - '0']++;
		}
		int sum = 0;
		for (int i = 9; i >= 0; i--)
			sum += a[i];
		s = "";
		int i = 9;
		while (i >= 0)
		{
			while (a[i] && sum > b + c)
				s += i + '0', a[i]--, sum--;
			i--;
		}
		i = 9;
		while (i >= 0)
		{
			while (a[i] && b)
				s += '+', s+= i + '0', a[i]--, b--;
			i--;
		}
		i = 9;

		while (i >= 0)
		{
			while (a[i] && c)
				s += '-', s+= i + '0', a[i]--, c--;
			i--;
		}

		cout << s << " ";
		cout << "\n";
	}
	return 0;
}
