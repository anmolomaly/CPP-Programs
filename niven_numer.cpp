#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter a number";
    int n;
    cin>>n;
    int no=n;
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    if(no%sum==0)
    cout<<"NIVEN";
    else
    cout<<"NOT NIVEN "<<sum<<" "<<no%sum;
    return 0;
}