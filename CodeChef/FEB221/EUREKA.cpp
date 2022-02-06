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
		int n;
		
		cin >> n;
		float f = pow(0.143 * n, n);
		if(f-floor(f)<0.5)
			cout << floor(f) << "\n";
		else
			cout << floor(f) + 1 << "\n";

		t--;
	}
	return 0;
}
