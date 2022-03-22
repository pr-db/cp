#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)

int solve(int n, string s, int c[])
{
	int cost = 0, cs = 0, tm = INT_MAX;
	for (int i = 0; i < n/2; i += 2)
	{
		tm = INT_MAX;
		cs = INT_MAX;
		int cas = 0;
		if ((s[i] != s[n - i - 1] || s[i + 1] != s[n - i - 2]) &&
			(s[i] != s[n - i - 2] || s[i + 1] != s[n - i - 1]))
		{
			int c1 = INT_MAX, c2 = INT_MAX;
			
			if (s[i] != s[n - i - 1])
				c1 = min(c[i], c[n - i - 1]);
			else
				c1 = 0;
			// cout << c1<<" ";
			if (s[i + 1] != s[n - i - 2])
				c2 = min(c[i + 1], c[n - i - 2]);
			else
				c2 = 0;
			// cout << c2 << " ";
			tm = min(cs,c1+c2);

			if (s[i] != s[n - i - 2])
				c1 = min(c[i], c[n - i - 2]);
			else
				c1 = 0;
			// cout << c1 << " ";
			if (s[i + 1] != s[n - i - 1])
				c2 = min(c[i + 1], c[n - i - 1]);
			else
				c2 = 0;
			// cout << c2 << " ";
			cs = min(tm, c1 + c2);
			// cout << cs << " ";
			cas++;
		}
		if (cas)
			cost += cs;
		// cout << "\n";
	}
	return cost;
}

int main()
{
	FastIO;
	int n;
	cin >> n;
	string s;
	cin >> s;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << solve(n, s, a) << "\n";
	return 0;
}
