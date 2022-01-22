#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int unioncount(int a[], int n, int b[], int m)
{
	set<int> s;
	for (int i = 0; i < n;i++)
	{
		s.insert(a[i]);
	}
	for (int i = 0; i < m;i++)
	{
		s.insert(b[i]);
	}
		return s.size();
}
int main()
{
	int n, m;
	int a[] = {85, 25, 1, 32, 54, 6};
	int b[] = {85, 2};
	n = sizeof(a) / sizeof(a[0]);
	m = sizeof(b) / sizeof(b[0]);

	int ct = unioncount(a, n, b, m);
	cout << ct;
	return 0;
}
