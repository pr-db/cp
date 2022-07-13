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
		string s;
		cin >> s;
		int ct = 0;
		if (s[0] == 'y' || s[0] == 'Y')
			if (s[1] == 'e' || s[1] == 'E')
				if (s[2] == 's' || s[2] == 'S')
					ct = 1;
		if (ct)
			cout << "YES";
		else
			cout
				<< "NO";
		cout << "\n";
	}
	return 0;
}
