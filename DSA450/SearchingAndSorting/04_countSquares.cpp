// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	bool issquare(int n, int x)
	{
		return x * x < n;
	}
	int countSquares(int N)
	{
		int l = 0, r = N, m;
		while (l + 1 < r)
		{
			m = l + (r - l) / 2;
			if (issquare(N, m))
				l = m;
			else
				r = m;
		}
		return l;
	}
};

// { Driver Code Starts.
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int N;

		cin >> N;

		Solution ob;
		cout << ob.countSquares(N) << endl;
	}
	return 0;
} // } Driver Code Ends