#include <bits/stdc++.h>

using namespace std;

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	int t;
	cin >> t;
	while (t > 0)
	{
		int n, k;
		int c = 0;
		cin >> n >> k;
		string s;
		cin >> s;
		for (int i = 0; i < n / 2; i++)
		{
			if (s[i] != s[n - i - 1])
				c++;
		}
		if (k >= c)
		{
			if ((k - c) % 2 == 0)
				cout << "YES"
					 << "\n";
			else if (n % 2 != 0)
				cout << "YES"
					 << "\n";
			else
				cout << "NO"
					 << "\n";
		}
		else
			cout << "NO"
				 << "\n";
		t--;
	}
	return 0;
}
