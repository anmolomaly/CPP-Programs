#include<iostream>
using namespace std;

int main()
{
    int n,s=0,n2;
    cout<<"Enter a number";
    cin>>n;
    n2=n*n;
    while(n2>0)
    {
        int r=n2%10;
        s=s+r;
        n2/=10;
    }
    if(s==n)
    cout<<"NEON";
    else
    cout<<"NOT NEON";
return 0;
}