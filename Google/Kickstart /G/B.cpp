#include <bits/stdc++.h>
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
#define nl cout << "\n";
int main()
{
	FastIO;
	int t;
	cin >> t;
	int k = 1;

	while (t--)
	{
		double rs, rh;
		cin >> rs >> rh;
		rh += rs;
		int n, m;
		cin >> n;
		priority_queue<double, vector<double>, greater<double>> a;
		priority_queue<double, vector<double>, greater<double>> b;
		for (int i = 0; i < n; i++)
		{
			int x, y;
			cin >> x >> y;
			double z = sqrt(x * x + y * y);
			a.push(z);
		}
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			int x, y;
			cin >> x >> y;
			double z = sqrt(x * x + y * y);
			b.push(z);
		}
		int ansa = 0, ansb = 0;
		if (!a.size())
		{
			while (b.size())
			{
				if (b.top() <= rh)
					ansb++;
				// cout << b.top() << " ";

				b.pop();
			}
			cout << "Case #" << k++ << ": " << 0 << " " << ansb << "\n";
			continue;
		}
		if (!b.size())
		{
			while (a.size())
			{
				if (a.top() <= rh)
					ansa++;
				// cout << a.top() << " ";

				a.pop();
			}
			cout << "Case #" << k++ << ": " << ansa << " " << 0 << "\n";
			continue;
		}
		if (a.top() < b.top())
		{
			ansb = 0;
			while (a.size() && a.top() <= rh && a.top() < b.top())
			{
				ansa++;
				// cout << a.top() << " ";
				a.pop();
			}
			cout << "Case #" << k++ << ": " << ansa << " " << ansb << "\n";
			continue;
		}
		if (b.top() < a.top())
		{
			ansa = 0;
			while (b.size() && b.top() <= rh && b.top() < a.top())
			{
				ansb++;
				// cout << b.top() << " ";

				b.pop();
			}
			cout << "Case #" << k++ << ": " << ansa << " " << ansb << "\n";
			continue;
		}
	}
	return 0;
}
