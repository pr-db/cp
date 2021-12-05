#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long int n=0;
        cin >> n;

        long long int A[100];
        if (n % 2 == 0)
        {
            cout << "YES";
            cout << "\n";
        }
        else
        {
            cout << "NO";
            cout << "\n";
        }
        t--;
    }
    return 0;
}
