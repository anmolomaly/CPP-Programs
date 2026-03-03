#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Enter a number";
    int n;
    cin>>n;
    int no=n;
    int count=0;
    while(no>0)
    {
        int rem=no%10;
        no/=10;
        count++;
    }
    cout<<count<<endl;
    int check=0;
    int an=0,a=0;;
    for(int i=0;i<count;i++)
    {
        int no=n;
        int sum=0;
        int r=no%10;
        no=no/10;
        if(count==3)
        r=r*pow(10,count-1)+1;
        else
        r=r*pow(10,count-1);
        sum=r+no;
        no=sum;
        
        int cb=0;
        for(int i=2;i<no;i++)
        {
            if(no%i==0)
            {   a=i;
                cb++;
                break;
            }
        }
        if(cb==0)
            check++;
        else
        {
            an=no;
            break;
        }
    }
    if(check==count)
    cout<<"Circular Prime";
    else
    cout<<"Not Circular Prime:"<<an<<" divisible by "<<a;
    return 0;
}