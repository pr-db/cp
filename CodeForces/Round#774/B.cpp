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
		string ans="NO";
		ll n;
		cin >> n;
		vector<int> a(n);
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		ll sumr = 0, sumb = 0, cr = 0, cb = 0;
		for (ll l = 0, r = n - 1; l < r;)
		{
			if(sumr>sumb&&cr<cb)
			{
				ans = "YES";
				break;
			}
			else if(cr<cb)
			{
				
				while(sumr<sumb&&l<r)
				{
					sumb += a[l++];
					cb++;
				}
				if (sumr > sumb)
				{
					ans = "YES";
					break;
				}
			}
			else
			{
				sumr += a[r++];
				cr++;
			}
		}
		if (sumr > sumb && cr < cb)
		{
			ans = "YES";
		}
		cout << sumr << " " << sumb<<" ";
		cout << ans << "\n";
	}
	return 0;
}
