#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int ct = 1;
		int ans = 0;
		for (int i = n - 1; i > 0; i--)
		{
			if (a[i] == a[i - 1])
				ct++;
			else
			{
				for (int j = 0; j < ct; j++)
				{
					a[i - 1] = a[i];
					i--;
				}
				ct *= 2;
				ans++;
			}
		}
		if (n % 2 != 0)
		{
			if (a[0] != a[1])
				ans++;
		}
		cout << ans << "\n\n\n";

		t--;
	}
	return 0;
}
