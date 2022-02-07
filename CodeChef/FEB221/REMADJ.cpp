#include <bits/stdc++.h>

using namespace std;

int del(int a[], int n, int k)
{
	for (int i = k; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
	return n;
}
int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	int t;
	cin >> t;
	while (t > 0)
	{
		int n, ct = 0;
		cin >> n;
		int size = n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int max = *max_element(a, a + n);
		for (int i = 0; i < n;)
		{
			if (i == n - 1)
			{
				if(a[i]==a[i-1])
					break;
				else
					ct = size - 1;
			}
			else
			{
				if (a[i] == max)
					i++;
				else
				{
					if (a[i] + a[i + 1] > max)
					{
						i = 0;
						max = a[i] + a[i + 1];
						a[i] = a[i] + a[i + 1];
						n = del(a, n, i + 1);
						ct++;
						
					}
					else // if (a[i] + a[i + 1] < max)
					{
						a[i] = a[i] + a[i + 1];
						n = del(a, n, i + 1);
						ct++;
						// i--;
					}
				}
			}
		}
		cout << ct << "\n";
		t--;
	}
	return 0;
}
