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
		int n;
		cin >> n;
		cout << 1;
		cout << "\n";
		for (int i = 1; i < n;i++)
		{
			cout << 1<<" ";
			for (int j = 0; j < i-1; j++)
			{
				cout << 0 << " ";
			}
			cout << 1;
			cout << "\n";
		}
	}
	return 0;
}