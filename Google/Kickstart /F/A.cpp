#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
struct col
{
	string color;
	int dur;
	int ind;
};

bool bycol(col &a, col &b)
{
	if (a.color == b.color)
		return a.ind < b.ind;
	return (lexicographical_compare(a.color.begin(), a.color.end(), b.color.begin(), b.color.end()));
}

bool bydur(col &a, col &b)
{
	if (a.dur == b.dur)
		return a.ind < b.ind;
	return (a.dur < b.dur);
}
int main()
{
	FastIO;
	int t;
	cin >> t;
	int k = 1;
	while (k <= t)
	{
		int n;
		cin >> n;
		vector<col> a(n);
		vector<col> b(n);

		for (int i = 0; i < n; i++)
		{
			cin >> a[i].color;
			cin >> a[i].dur;
			cin >> a[i].ind;
		}
		sort(a.begin(), a.end(), bycol);
		b = a;

		sort(b.begin(), b.end(), bydur);
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			// cout << a[i].color << " " << a[i].dur << ", " << b[i].color << " " << b[i].dur << "\n";
			if (a[i].color == b[i].color &&
				a[i].dur == b[i].dur &&
				a[i].ind == b[i].ind)
				ans++;
		}
		cout << "Case #" << k++ << ": " << ans << "\n";
	}

	return 0;
}
