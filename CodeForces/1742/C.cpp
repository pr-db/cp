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
		vector<vector<char>> a(8, vector<char>(8, '.'));
		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++)
				cin >> a[i][j];
		char ans='0';
		for (int i = 0; i < 8; i++)
		{
			int c = 0;
			if (a[i][0] == 'R')
			{
				c = 1;
				for (int j = 1; j < 8; j++)
					if (a[i][j] == 'R')
						c++;
			}
			else
				continue;
			if(c==8)
				ans = 'R';
		}
		if (ans!='0')
			cout <<ans;
		else
		{
			for (int i = 0; i < 8; i++)
			{
				int c = 0;
				 if (a[0][i] == 'B')
				{
					c = 1;
					for (int j = 1; j < 8; j++)
						if (a[j][i] == 'B')
							c++;
				}
				else
					continue;
				if (c == 8)
					ans = 'B';
			}
			cout << ans;
		}
		cout << "\n";
	}
	return 0;
}
