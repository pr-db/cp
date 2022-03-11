#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s)
{
	vector<int> a(26);
	for (int i = 0; i < s.size(); i++)
	{
		int b = s[i];
		if (b >= 65 && b <= 90)
			a[b - 65]++;
		if (b >= 97 && b <= 122)
			a[b - 97]++;
	}
	int ct = 1;
	for (int i = 0; i < 26; i++)
		if (a[i] == 0)
		{
			ct = 0;
			break;
		}
	if (ct)
		s = "pangram";
	else
		s = "not pangram";
	return s;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string s;
	getline(cin, s);

	string result = pangrams(s);

	fout << result << "\n";

	fout.close();

	return 0;
}
