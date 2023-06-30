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
		ll n, k, x;
		cin >> n >> k >> x;

		if(k==1)
			cout << "NO";
		else if(k==2)
		{
			if(x==1)
			{
				if(n%2)
					cout << "NO";
				else 
				{
					n /= 2;
					cout << "YES"
						 << "\n";
					cout << n << "\n";
					while(n--)
						cout << 2 << " ";
				}
			}
			else 
			{
				cout << "YES"
					 << "\n";
				cout << n << "\n";
				while (n--)
					cout << 1 << " ";
			}
		}
		else
		{
			if (x == 1)
			{
				if (n % 2)
				{
					if(n<3)
						cout << "NO";
					else 
					{
						int tc = 0;
						if (n % 3 == 0)
							tc = 0;
						else if (n % 3 == 1)
							tc = 2;
						else
							tc = 1;
						n -= tc * 2;
						n /= 3;
						cout << "YES"
							 << "\n";

						cout << n + tc;
						cout << "\n";

						while (n--)
							cout << 3 << " ";
						while (tc--)
							cout << 2 << " ";
					}
				}
				else
				{
					n /= 2;
					cout << "YES"
						 << "\n";
					cout << n << "\n";
					while (n--)
						cout << 2 << " ";
				}
			}
			else
			{
				cout << "YES"
					 << "\n";
				cout << n << "\n";
				while (n--)
					cout << 1 << " ";
			}
		}
		
	cout << "\n";
}
return 0;
}
