#include <iostream>
#include<math.h>
using namespace std;
int f[100]={-1};
float fb(int n)
{
    if(n<=1)
    {
        f[n]=n
        return n;
    }
    else
    {
        if(f[n-2]==-1)
            f[n-2]=fb(n-2);
        if(f[n-1]==-1)
            f[n-1]=fb(n-1);
        return f[n-2+f[n-1];
    }
}
int main()
{
    int x,n;
    cin>>n;
    return 0;

}
