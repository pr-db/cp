#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <set>

using namespace std;

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	int t;
	cin >> t;
	while (t > 0)
	{
		int n, x;
		cin >> n >> x;
		int a[n],ct =0,sum=0;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n, greater<int>());
		for (int i = 0; i < n; i++)
		{
			cout<< a[i];
		}
		for (int i = 0; i < n; i++)
		{
			sum += a[i];
			ct += 1;
			if(sum>=x)
			{
				break;
			}
		}
		if(ct<=n&&ct!=0)
			cout << ct;
		else
			cout << "-1";

		t--;
	}
	return 0;
}