#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

string breakPalindrome(string palindromeStr)
{
	long long i = 0;
	long long n = palindromeStr.size();
	while (palindromeStr[i] == 'a')
		i++;
	if (n % 2 && i == (n + 1) / 2)
		palindromeStr = "IMPOSSIBLE";
	else if (i < n)
		palindromeStr[i] = 'a';
	else
		palindromeStr = "IMPOSSIBLE";
	return palindromeStr;
}
int main()
{
	string s;
	cin >> s;
	cout << breakPalindrome(s);

	return 0;
}
