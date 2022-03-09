#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
	if (s[8] == 'A')
	{
		s.erase(8);
		if (s[0] == '1' && s[1] == '2')
		{
			s[0] = '0';
			s[1] = '0';
		}
		return s;
	}
	else
	{
		s.erase(8);
		if (s[0] == '1' && s[1] == '2')
		{
			return s;
		}
		string s1 = to_string(stoi(s.substr(0, 2)) + 12);
		s[0] = s1[0];
		s[1] = s1[1];
		return s;
	}
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string s;
	getline(cin, s);

	string result = timeConversion(s);

	fout << result << "\n";

	fout.close();

	return 0;
}
