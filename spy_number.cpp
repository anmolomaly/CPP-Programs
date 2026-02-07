#include <iostream>
int main()
{
    std::cout<<"Enter a number";
    int n;
    std::cin>>n;
    int sum=0,mul=1;
    while(n>0)
    {
        int r=n%10;
        sum=sum+r;
        mul=mul*r;
        n=n/10;
    }
    if(sum==mul)
    std::cout<<"YES";
    else
    std::cout<<"NO: sum is "<<sum<<" and product is "<<mul;
    return 0;
} 