// fibbonacci series
#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;
    int a=0,b=1,c=0;
    while(n>0)
    {
        std::cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return 0;
}