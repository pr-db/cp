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
	int x, y;
	x = 3;
	y = 6;
	for (int i = x - 1; i < x + 2; i++)
		for (int j = y-1; j <y+ 2;j++)
			if((i==x)^(j==y))
				cout << i << "," << j << " ";
	return 0;
}
