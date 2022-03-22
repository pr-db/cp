#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)

long long findMin(int n, int m, vector<int> &p, vector<int> &w, vector<int> &s, vector<int> &d)
{
	long long cost = 0;
	sort(w.begin(), w.end());
	long long sum = 0;
	vector<long long> ws(n);
	for (int i = 0; i < n; i++)
	{
		sum += w[i];
		ws[i] = sum;
		// cout << ws[i] << " ";
	}
	// cout << "\n\n";
	for (int i = 0; i < m; i++)
	{
		long long cs = 0;
		int e1 = 0,e2=0,e, now = d[i];
		while (now != s[i])
		{
			now = p[now];
			if (now == -1)
			{
				now = s[i];
				while (now != -1)
				{
					now = p[now];
					if (now != -1)
						e1++;
					else
						break;
				}
				break;
			}
			else
				e1++;
		}
		now = s[i];
		while (now != d[i])
		{
			now = p[now];
			if (now == -1)
			{
				now = d[i];
				while (now != -1)
				{
					now = p[now];
					if (now != -1)
						e2++;
					else
						break;
				}
				break;
			}
			else
				e2++;
			
		}
		e = min(e1, e2);
		cost += ws[e];
	}
	return cost;
}

int main()
{
	FastIO;
	int n, m;
	cin >> n >> m;

	vector<int> p(n);
	vector<int> w(n);
	for (int i = 0; i < n; i++)
		cin >> p[i];
	for (int i = 0; i < n; i++)
		cin >> w[i];

	vector<int> s(m);
	vector<int> d(m);
	for (int i = 0; i < m; i++)
		cin >> s[i];
	for (int i = 0; i < m; i++)
		cin >> d[i];

	cout << findMin(n, m, p, w, s, d) << "\n";
	return 0;
}
