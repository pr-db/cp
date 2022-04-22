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
		ll ans;
		cin >> ans;
		if (ans >= 1900)
			cout << "Division 1"
				 << "\n";
		else if (ans >= 1600 && ans <= 1899)
			cout << "Division 2"
				 << "\n";
		else if (ans >= 1400 && ans <= 1599)
			cout << "Division 3"
				 << "\n";
		else
			cout << "Division 4"
				 << "\n";
	}
	return 0;
}
