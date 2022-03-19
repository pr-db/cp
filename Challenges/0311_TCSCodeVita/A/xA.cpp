#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
using namespace std;

class Student
{
public:
	string id;
	double percentage;
	string choice[3];
	// Student(string _id, double _percentage)
	// {
	// 	this->id = _id;
	// 	this->percentage = _percentage;
	// }
};
class PercentCompare
{
public:
	bool operator()(Student a, Student b)
	{
		return a.percentage > b.percentage;
	}
}pcmp;
int main()
{
	ll c, n;
	cin >> c >> n;
	ll s[c];
	list<Student> st(n);
	pair<string, string> ans[n];
	for (ll i = 0; i < c; i++)
		cin >> s[c];
	for (ll i = 0; i < n; i++)
	{
		cin >> st[i].id;
		cin >> st[i].percentage;
		for (int j = 0; j < 3; j++)
			cin >> st[i].choice[j];
	}

	st.sort(pcmp);
	for (ll i = 0; i < n; i++)
		cout << st[i].id << " " << st[i].percentage << "\n";
	return 0;
}
