#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
using namespace std;

ll min(ll a, ll b)
{
	if (a > b)
	{
		return b;
	}
	return a;
}
ll max(ll a, ll b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}

const ll Q = 1e5 + 1;

ll power(ll a, ll b)
{
	if (b == 0)
	{
		return 1;
	}
	ll x = power(a, b >> 1);
	x = (x * x) % MOD;
	if (b & 1)
	{
		x = (x * a) % MOD;
	}
	return x;
}
int lmsb(int n)
{
	return (int)(log2(n));
}
int bit_count(int num)
{
	return __builtin_popcountll(num);
}
int main()
{
	FastIO;
	int t;
	cin >> t;
	while (t--)
	{
		ll n, m;
		cin >> n >> m;
		ll dp[n + 1][2];
		dp[1][0] = 1;
		dp[1][1] = 1;
		for (int i = 2; i <= n; i++)
		{
			dp[i][0] = dp[i - 1][0] + dp[i - 1][1]; // dp[i][0]=no of string of length of i with first character is A;
			dp[i][1] = dp[i - 1][0];				// dp[i][1]=no of string of length of i with first character is B;
		}
		int flag = 0;
		vector<char> ans;
		for (int i = n; i > 0 && flag == 0 && m != 0; i--)
		{
			if (dp[i][0] >= m)
			{
				ans.push_back('A');
			} // we place char A at position n-i+1 , if dp[i][0]>=m
			else if (dp[i][1] + dp[i][0] >= m)
			{
				ans.push_back('B');
				m -= dp[i][0];
			} // we place char B at position n-i+1 , if dp[i][1] + dp[i][0]>=m
			else
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			cout << "Not Possible";
		}
		else
		{
			for (auto it : ans)
			{
				cout << it;
			}
		}
		cout << "\n";
	}

	return 0;
}