#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	string minWindow(string s1, string s2)
	{
		int n = s1.size();
		int m = s2.size();

		int ptr = 0;
		int ans = n;
		string sans;
		int st = 0;
		for (int i = 0; i < n; i++)
		{
			if (s1[i] == s2[ptr])
			{
				if (ptr == 0)
				{
					st = i;
				}
				ptr += 1;
				if (ptr == m)
				{
					int j = m - 1;
					for (int k = i; k > st; k--)
					{
						if (s1[k] == s2[j])
						{
							j -= 1;
							if (j < 0)
							{
								st = k;
								break;
							}
						}
					}
					if (i - st < ans)
					{
						ans = min(ans, i - st);
						sans = s1.substr(st, i - st + 1);
					}
					ptr = 0;
				}
			}
		}

		return sans;

		//         vector<vector<int>> dp(n+1,vector<int> (m+1,0));

		//         for(int i=1;i<=n;i++){
		//             for(int j=1;j<=m;j++){
		//                 if(s1[i-1]==s2[j-1]){
		//                     dp[i][j]=1+dp[i-1][j-1];
		//                 }
		//                 else{
		//                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		//                 }
		//             }
		//         }
		//         string ans;
		//         if(dp[n][m]!=m){
		//             return ans;
		//         }
		//         int ptr1=0;
		//         int ptr2=n;

		//         for(int i=0;i<=n;i++){
		//             cout<<dp[i][m]<<" ";
		//         }

		//         while(ptr1<ptr2 && dp[ptr1+1][m]!=m){
		//             ptr1+=1;
		//         }
		//         while(ptr1<ptr2 && dp[ptr2-1][m]-dp[ptr1][m]==m){
		//             ptr2-=1;
		//         }

		//         for(int i=ptr1;i<ptr2;i++){
		//             ans+=s1[i];
		//         }
		//         return ans;
	}
};
int main()
{
	string s, t;
	cin >> s >> t;
	string sn;
	for (int i = 0; i < s.size(); i++)
	{
		sn += s[i];
		sn += " ";
	}
	cout << sn;
	Solution sol;
	cout << sol.minWindow(s, t);
}