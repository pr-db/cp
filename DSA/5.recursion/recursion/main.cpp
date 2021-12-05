#include <iostream>
#include<math.h>
using namespace std;
int f(int m, int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return pow(f(m,n/2),2);
    }
    else
    {
        return pow(f(m,(n-1)/2),2)*m;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<f(m,n);
    return 0;

}
