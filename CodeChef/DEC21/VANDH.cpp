#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int m, n, k, c = 0;
        cin >> n >> m;
        k = min(m, n);
        string s, hill = "010", valley = "101", vah = "10", hav = "01";
        for (int i = 0; i <= k; i++)
        {
            if (n == m)
            {
                s += hav;
                c = 2;
            }
            else if (n == k)
            {
                s += vah;
                c = 0;
            }
            else
            {
                s += hav;
                c = 1;
            }
        }
        if (c == 0)
        {
            s += '1';
            for (int i = 1; i < m - k; i++)
            {
                s += valley;
            }
        }
        else if (c == 1)
        {
            s += '0';
            for (int i = 1; i < n - k; i++)
            {
                s += hill;
            }
        }
        cout << s.length() << endl
             << s << endl;
        t--;
    }
    return 0;
}
