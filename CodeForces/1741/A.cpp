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
		string a, b;
		cin >> a >> b;
		int n = a.size();
		int m = b.size();

		// cout << a[n - 1] << " " << b[m - 1];
		if (a[n - 1] == 'S')
		{
			if (b[m - 1] == 'S')
				if (m == n)
					cout << "=";
				else if (m > n)
					cout << ">";
				else
					cout << "<";
			else
				cout << "<";
		}
		else if (a[n - 1] == 'M')
		{
			if (b[m - 1] == 'M')
				cout << "=";
			else if (b[m - 1] == 'S')
				cout << ">";
			else
				cout << "<";
		}
		else
		{
			if (b[m - 1] == 'L')
				if (m == n)
					cout << "=";
				else if (m > n)
					cout << "<";
				else
					cout << ">";
			else
				cout << ">";
		}
		cout << "\n";
	}
	return 0;
}
