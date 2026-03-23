#include <iostream>
using namespace std;

int main()
{
    int n=0;
    cout<<"Enter a number";
    cin>>n;
    int f=1,no=n,s=0;
    while(no>0)
    {
        int r=no%10;
        f=1;
        for(int i=r;i>0;i--)
        {
            f=f*i;
        }
        s=s+f;
        no/=10;
    }
    if(s==n)
    cout<<"STRONG";
    else
    cout<<"NOT STRONG";
    return 0;
}