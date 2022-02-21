#include <bits/stdc++.h>

using namespace std;

long long countSubstrings(string s)
{
	long long n = s.length();
	return n * (n + 1) / 2;
}

long long countPalindrome(string S)
{
	long long ans = 0, ct0 = -1, ct1 = -1, c0 = 0, c1 = 0, c2 = 0, c = 0;
	for (long long i = 0; i < S.size(); i++)
	{
		if (ct0 == -1)
		{
			if (S[i] == '1')
			{
				ct0 = i;
			}
		}
		if (ct1 == -1 && ct0 != -1 && ct0 != i)
		{
			if (S[i] == '1')
			{
				ct1 = i;
			}
		}
	}
	if (ct0 == -1)
	{
		ans += countSubstrings(S);
	}
	else if (ct1 == -1 && ct0 != -1)
	{
		ans += 1;
		c0 = ct0;
		c2 = S.size() - c0 - 1;

		c = min(c0, c2);
		ans += c;
		string s1 = S.substr(0, c0), s2 = S.substr(c0 + 1, c2);
		ans += countSubstrings(s1);
		ans += countSubstrings(s2);
	}
	else
	{
		ans += 2;
		c0 = ct0;
		c2 = S.size() - ct1 - 1;
		c1 = S.size() - c0 - c2 - 2;
		c = min(c0, c1);
		ans += c;
		c = min(c1, c2);
		ans += c;
		c = min(c0, c2);
		ans += c;
		ans += 1;
		string s1 = S.substr(0, c0), s2 = S.substr(c0 + 1, c1), s3 = S.substr(ct1 + 1, c2);

		ans += countSubstrings(s1);
		ans += countSubstrings(s2);
		ans += countSubstrings(s3);
	}

	return ans;
}
int main()
{
	string S = "00000";
	long long ans = countPalindrome(S);
	cout << ans;
	return 0;
}
