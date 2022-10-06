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
		int n;
		cin >> n;
		cin >> s;
		string x = "";
		string y = "";
		for (int i = 0,j=0,k=n-1; i < n; i++)
		{
			if (i % 2==0)
			{
				if (s[j] - '0')
					x += s[j];
				else
				{
					y = s[j];
					y += x;
					x = "";
					swap(x, y);
				}
				j++;
				// cout << x << " ";
			}
			else 
			{
				if (s[k] - '0' ==0)
					x += s[k];
				else
				{
					y = s[k];
					y += x;
					x = "";
					swap(x, y);
				}
				k--;
				// cout << x << " ";
			}
		}
		cout << x << " ";
		cout << "\n";
	}
	return 0;
}
