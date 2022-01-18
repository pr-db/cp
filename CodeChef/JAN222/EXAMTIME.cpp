#include <iostream>
#include <cstdlib>
#include <string>
#include <set>

using namespace std;

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	int t;
	cin >> t;
	while (t > 0)
	{
		int D[3], S[3];
		int sumD = 0, sumS = 0;

		for (int i = 0; i < 3; i++)
		{
			cin >> D[i];
			sumD += D[i];
		}
		for (int i = 0; i < 3; i++)
		{
			cin >> S[i];
			sumS += S[i];
		}
		if (sumD > sumS)
		{
			cout << "Dragon"
				 << "\n";
		}
		else if (sumD == sumS)
		{
			if (D[0] > S[0])
			{
				cout << "Dragon"
					 << "\n";
			}
			else if (D[0] == S[0])
			{
				if (D[1] > S[1])
				{
					cout << "Dragon"
						 << "\n";
				}
				else if (D[1] == S[1])
				{
					if (D[2] > S[2])
					{
						cout << "Dragon"
							 << "\n";
					}
					else if (D[2] == S[2])
					{
						cout << "Tie"
							 << "\n";
					}
					else
					{
						cout << "Sloth"
							 << "\n";
					}
				}
				else
				{
					cout << "Sloth"
						 << "\n";
				}
			}
			else
			{
				cout << "Sloth"
					 << "\n";
			}
		}
		else
		{
			cout << "Sloth"
				 << "\n";
		}

		t--;
	}
	return 0;
}