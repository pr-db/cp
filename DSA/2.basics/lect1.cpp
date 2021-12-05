#include <stdlib.h>
#include <iostream>
using namespace std;
struct Rect
{
    int l = 0;
    int b = 0;
} r;
int area(Rect &r)
{
    return r.l * r.b;
}
int main()
{
    cin >> r.l >> r.b;
    int ar = area(r);
    return ar;
}