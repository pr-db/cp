class Solution
{
public:
	int longestPalindrome(vector<string> &a)
	{
		int n = a.size();
		vector<vector<int>> v(26, vector<int>(26));
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (v[a[i][1] - 'a'][a[i][0] - 'a'])
				ans += 4, v[a[i][1] - 'a'][a[i][0] - 'a']--;
			else
				v[a[i][0] - 'a'][a[i][1] - 'a']++;
		}
		for (int i = 0; i < 26; i++)
			if (v[i][i])
			{
				ans += 2;
				break;
			}
		return ans;
	}
};