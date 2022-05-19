#include <bits/stdc++.h>
#define VI vector<int>
#define int long long
#define PI pair<int, int>
#ifndef ONLINE_JUDGE
#define debug1(x) cout << #x << "=" << x << endl;
#define debug2(x, y) cout << #x << "=" << x << " " << #y << "=" << y << endl;
#define debug3(x, y, z) cout << #x << "=" << x << " " << #y << "=" << y << " " << #z << "=" << z << endl;
#define debugv(x, size)                  \
	for (size_t tk = 0; tk < size; tk++) \
	{                                    \
		cout << x[tk] << " ";            \
	}                                    \
	cout << endl;
#else
#define debug1(x) ;
#define debug2(x, y) ;
#define debug3(x, y, z) ;
#define debugv(x, size) ;
#endif

using namespace std;

double xavg = 0, yavg = 0;

void counterclockwisesort(VI &x, VI &y)
{
	int n = x.size();
	vector<PI> temp;
	xavg = 0;
	yavg = 0;
	for (int i = 0; i < n; i++)
	{
		xavg += x[i];
		yavg += y[i];
		temp.push_back({x[i], y[i]});
	}

	xavg /= n;
	yavg /= n;

	// debug2(xavg, yavg);

	sort(temp.begin(), temp.end(), [&](PI &a, PI &b)
		 {
            double x1 = a.first - xavg;
            double y1 = a.second - yavg;
            double x2 = b.first - xavg;
            double y2 = b.second - yavg;

            // debug2(x1, y1);
            // debug2(x2, y2);

            if (atan2(y1, x1) <= atan2(y2, x2))
            {
                return true;
            }

            return false; });

	// for (int i = 0; i < n; i++)
	// {
	//     cout << temp[i].first << " " << temp[i].second << endl;
	// }

	for (int i = 0; i < n; i++)
	{
		x[i] = temp[i].first;
		y[i] = temp[i].second;
	}
}

double area(VI &x, VI &y)
{
	int n = x.size();
	counterclockwisesort(x, y);
	// debugv(x, n);
	// debugv(y, n);

	double ans = 0;
	for (int i = 0; i < n; i++)
	{
		// debug2(x[i], y[i]);
		// debug2(x[(i + 1) % n], y[(i + 1) % n]);
		ans += (x[i] * y[(i + 1) % n]) - (y[i] * x[(i + 1) % n]);
		// debug1(ans);
	}

	ans = abs(ans) / 2;
	// debug1(ans);
	return ans;
}

int32_t main()
{
	int n;
	cin >> n;

	VI x(n), y(n);

	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}

	double ans = 0;
	for (int mask = 0; mask < (2 << n); mask++)
	{
		VI cx, cy;

		for (int i = 0; i < n; i++)
		{
			if ((mask >> i) & 1)
			{
				cx.push_back(x[i]);
				cy.push_back(y[i]);
			}
		}

		if (cx.size() > 2)
		{
			ans = max(ans, area(cx, cy));
		}
	}

	cout << ans << endl;

	return 0;
}