#include <iostream>
#include <cstdlib>
#include <string>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t > 0)
	{
		int n = 0, ind = 0;
		string s = "\0";
		char ans[1000] = "\0";
		cin >> n;
		cin >> s;
		// s += '0';
		for (int i = 1; i < n; i++)
		{
			string temps = s;
			for (int j = i; j < n; j++)
			{
				if (temps[j - 1] == 'R')
				{
					if (temps[j] == 'P')
						ans[ind] = 'P';
					else
						ans[ind] = 'R';
				}
				else if (temps[j - 1] == 'P')
				{
					if (temps[j] == 'S')
						ans[ind] = 'S';
					else
						ans[ind] = 'P';
				}
				else if (temps[j - 1] == 'S')
				{
					if (temps[j] == 'R')
						ans[ind] = 'R';
					else
						ans[ind] = 'S';
				}
				temps[j] = ans[ind];
			}
			ind++;
		}
		ans[n - 1] = s[n - 1];
		string anss(ans);
		if (n == 1)
			cout << s;
		else
			cout << ans;
		cout << "\n";
		t--;
	}
	return 0;
}
