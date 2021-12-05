#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long int n = 0;
        cin >> n;

        long long int A[100], ct = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] % 2 != 0)
                ct++;
        }
        cout << ct / 2 << "\n";

        t--;
    }
    return 0;
}
