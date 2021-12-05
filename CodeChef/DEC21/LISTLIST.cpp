#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		int n, count = 1, maxcount = 1;
		cin >> n;
		int A[n];
		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
		}
		sort(A, A + n);

		for (int i = 1; i < n; i++)
		{
			if (A[i] == A[i - 1])
			{
				count++;
				if (count > maxcount)
				{
					maxcount = count;
				}
			}
			else
			{
				count = 1;
			}
		}
		if (n == maxcount)
		{
			cout << 0 << endl;
		}
		else if (maxcount == 1)
		{
			cout << -1 << endl;
		}
		else
			cout << (n - maxcount) + 1 << endl;
		t--;
	}
	return 0;
}
