#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;

        if (x + a * k > y + b * k)
        {
            cout << "DIESEL";
            cout << "\n";
        }

        else if (x + a * k < y + b * k)
        {
            cout << "PETROL";
            cout << "\n";
        }
        else
        {
            cout << "SAME PRICE";
            cout << "\n";
        }

        t--;
    }
    return 0;
}
