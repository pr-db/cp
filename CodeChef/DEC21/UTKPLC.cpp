#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        char a, b, c, ch1, ch2;
        cin >> a >> b >> c;
        cin >> ch1 >> ch2;
        char choices[] = {a, b, c};

        for (int i = 0; i < 2; i++)
        {
            if (ch1 == choices[i])
            {
                cout << ch1;
                break;
            }
            if (ch2 == choices[i])
            {
                cout << ch2;
                break;
            }
        }

        t--;
    }
    return 0;
}
