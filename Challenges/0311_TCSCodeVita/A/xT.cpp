#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
	string id;
	double percentage;
	string choice[3];
};

bool sortByPercentage(Student a, Student b)
{
	return a.percentage >= b.percentage;
}

bool pSortById(Student a, Student b)
{
	if (a.percentage == b.percentage)
	{
		reverse(a.id.begin(), a.id.end());
		int aaid = stoi(a.id);
		reverse(b.id.begin(), b.id.end());
		int bbid = stoi(b.id);
		int aao = aaid % 10;
		int aat = aaid / 10;
		int aid = aao * 10 + aat;
		int bbo = bbid % 10;
		int bbt = bbid / 10;
		int bid = bbo * 10 + bbt;

		return (int)aid < (int)bid;
	}
	return false;
}

int main()
{
	int c, n;
	cin >> c >> n;
	int s[c];
	Student st[n];
	vector<vector<string>> ans;
	for (int i = 0; i < c; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < n; i++)
	{
		string inp;
		cin >> inp;

		int k = inp.size();
		vector<string> v;
		string curr = "";
		for (int o = 0; o < k; o++)
		{
			if (inp[o] == ',')
			{
				v.push_back(curr);
				curr = "";
			}
			else
			{
				curr += inp[o];
			}
		}
		v.push_back(curr);

		st[i].id = v[0];
		st[i].percentage = stod(v[1]);
		st[i].choice[0] = v[2];
		st[i].choice[1] = v[3];
		st[i].choice[2] = v[4];
	}
	sort(st, st + n, sortByPercentage);
	sort(st, st + n, pSortById);

	for (int i = 0; i < n; i++)
	{
		int idx = 0;
		while (st[i].choice[0][idx] != '-')
		{
			idx += 1;
		}
		idx += 1;
		string s1 = st[i].choice[0].substr(idx, st[i].choice[0].size() - (idx + 1));
		int c1 = stoi(s1) - 49;

		idx = 0;
		while (st[i].choice[1][idx] != '-')
		{
			idx += 1;
		}
		idx += 1;
		string s2 = st[i].choice[1].substr(idx, st[i].choice[1].size() - (idx + 1));
		int c2 = stoi(s2) - 49;

		idx = 0;
		while (st[i].choice[2][idx] != '-')
		{
			idx += 1;
		}
		idx += 1;
		string s3 = st[i].choice[2].substr(idx, st[i].choice[2].size() - (idx + 1));
		int c3 = stoi(s3) - 49;

		vector<string> ansv;
		if (c1 >= 0 && c1 < c)
			if (s[c1] > 0)
			{
				ansv.push_back(st[i].id);
				ansv.push_back(st[i].choice[0]);
				s[c1]--;
				ans.push_back(ansv);
				continue;
			}
		if (c2 >= 0 && c2 < c)
		{
			if (s[c2] > 0)
			{
				ansv.push_back(st[i].id);
				ansv.push_back(st[i].choice[1]);
				s[c2]--;
				ans.push_back(ansv);
				continue;
			}
		}

		if (c3 >= 0 && c3 < c)
			if (s[c3] > 0)
			{
				ansv.push_back(st[i].id);
				ansv.push_back(st[i].choice[2]);
				s[c3]--;
				ans.push_back(ansv);
				continue;
			}
	}
	int an = (int)ans.size();
	for (int i = 0; i < an; i++)
	{
		cout << ans[i][0] << " " << ans[i][1] << "\n";
	}

	return 0;
}