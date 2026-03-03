#include <iostream>
using namespace std;

    int cal(int n,int sum)
    {
      while(n>9)
     {
       sum=0;
       while(n>0)
        {
           int rem=n%10;
           sum+=rem;
            n/=10;
        }
        n=sum;
     }
     return sum;
    }

    void display(int check)
 {
    if(check==1)
        cout<<"\nHappy number";
    else   
        cout<<"\nNot a happy number "<<check;
}

int main()
{
    int n;
    cin>>n;
    int s=0;
    if(n<10)
    {
        if(n==1)
        cout<<"\nHappy number";
        else
        cout<<"\nNot a happy number "<<n;
    }
    else
    {
        int check=cal(n,s);
        display(check);
    }
}