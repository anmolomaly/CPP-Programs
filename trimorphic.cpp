#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,sn=0,con,c=0;
    cout<<"ENTER A NUMBER";
    cin>>n;
    if(n%10==5)
    con=pow(n,3)+1;
    else
    con=pow(n,3);
    cout<<con<<endl;
    int no=n;
    while(no>0)
    {
        c++;
        no/=10;
    }
    int i=0;
    while(i<c)
    {
        int r=con%10;
        sn=sn+pow(10,i)*r;
        con/=10;
        i++;
    }
    if(sn==n)
    cout<<"TRIMORPHIC";
    else
    cout<<"NOT TRIMORPHIC as the last digits are: "<<sn;
    return 0;
}