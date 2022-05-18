#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int func(vector<int> &s)
{
	int ans;
	while (s.size() > 2)
	{
		sort(s.rbegin(), s.rend());
		// for (int i = 0; i < s.size(); i++)
		// 	cout << s[i] << " ";
		if (s[0] == s[1])
		{
			s.erase(s.begin() );
			s.erase(s.begin() );
		}
		else
		{
			s[0] -= s[1];
			s.erase(s.begin() + 1);
		}
		// cout << "\n";
	}
	if (s.size() == 2)
		if (s[0] == s[1])
			return 0;
		else
			return abs(s[0] - s[1]);
	else
		return s[0];
}
int main()
{
	int n, k;
	vector<int> a = {10,4,2,10};

	int ans = func(a);
	cout << ans;
	
	// for (int i = 0; i < a.size(); i++)
	// 	cout << a[i] << " ";
		return 0;
}
