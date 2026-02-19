#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the binary number: ";
        int n;
        cin>>n;
        int decimal=0,base=1,rem;
        while(n>0)
        {
            rem=n%10;
            decimal=decimal+rem*base;
            n=n/10;
            base=base*2;
        }   
        cout<<"The decimal number is: "<<decimal;        
}