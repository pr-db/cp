#include <iostream>
#include <string>
#include <set>
#include <cstdlib>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t > 0)
    {
        int k[2], r1[2], r2[2], flag = 0;
        for (int i = 0; i < 2; i++)
        {
            cin >> k[i];
        }
        for (int i = 0; i < 2; i++)
        {
            cin >> r1[i];
        }
        for (int i = 0; i < 2; i++)
        {
            cin >> r2[i];
        }
        if (k[0] == 1 && r1[1] != r2[1])
        {
            set<int> kingspace = {k[1], k[1] - 1, k[1] + 1};
            if (r1[0] == 2 && kingspace.count(r1[1]) == 0)
            {
                if (kingspace.count(r2[1]) == 0)
                    flag = 1;
                else
                    flag = 0;
            }
            else if (r2[0] == 2 && kingspace.count(r2[1]) == 0)
            {
                if (kingspace.count(r1[1]) == 0)
                    flag = 1;
                else
                    flag = 0;
            }
        }
        if (k[0] == 8 && r1[1] != r2[1])
        {
            set<int> kingspace = {k[1], k[1] - 1, k[1] + 1};
            if (r1[0] == 7 && kingspace.count(r1[1]) == 0)
            {
                if (kingspace.count(r2[1]) == 0)
                    flag = 1;
                else
                    flag = 0;
            }
            else if (r2[0] == 7 && kingspace.count(r2[1]) == 0)
            {
                if (kingspace.count(r1[1]) == 0)
                    flag = 1;
                else
                    flag = 0;
            }
        }
        if (k[1] == 1 && r1[0] != r2[0])
        {
            set<int> kingspace = {k[0], k[0] - 1, k[0] + 1};
            if (r1[1] == 2 && kingspace.count(r1[0]) == 0)
            {
                if (kingspace.count(r2[0]) == 0)
                    flag = 1;
                else
                    flag = 0;
            }
            else if (r2[1] == 2 && kingspace.count(r2[0]) == 0)
            {
                if (kingspace.count(r1[0]) == 0)
                    flag = 1;
                else
                    flag = 0;
            }
        }
        if (k[1] == 8 && r1[0] != r2[0])
        {
            set<int> kingspace = {k[0], k[0] - 1, k[0] + 1};
            if (r1[1] == 7 && kingspace.count(r1[0]) == 0)
            {
                if (kingspace.count(r2[0]) == 0)
                    flag = 1;
                else
                    flag = 0;
            }
            else if (r2[1] == 7 && kingspace.count(r2[0]) == 0)
            {
                if (kingspace.count(r1[0]) == 0)
                    flag = 1;
                else
                    flag = 0;
            }
        }

        if (flag == 0)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
        t--;
    }
    return 0;
}
