#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t != 0)
	{
		int n, k, id = 0, maxc = 0, maxn = 0;
		cin >> n >> k;
		string s;
		cin >> s;
		for (int i = 0, j = 0; j < 2; i++)
		{
			if (i == n)
			{
				i = -1;
				j++;
				continue;
			}
			if (s[i] == '1')
			{
				maxn++;
				if (maxn > maxc)
				{
					maxc = maxn;
					id = i;
				}
			}
			else
				maxn = 0;
		}
		int ans = 0;
		if(id-maxc<0)
			ans = id - maxc + n + 1;
		else
			ans = id - maxc+1;
		cout << maxc << " " << id << "\n";
		cout << ans << "\n";
		t--;
	}
}