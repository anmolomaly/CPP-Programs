#include <iostream>
#include <cmath>
int main()
{
    std::cout<<"Enter a number and i will you you if its an armstrong number or not: ";
    int n;
    std::cin>>n;
    int no=n;
    int sum=0;
    while(no>0)
    {
        int r=no%10;
        sum=sum+pow(r,3);
        no=no/10;
    }
    if(sum==n)
    {
        std::cout<<n<<" is an armstrong number."<<std::endl;
    }
    else
    {
        std::cout<<n<<" is not an armstrong number, the sum of cubes of digits is "<<sum<<std::endl;
    }
    return 0;
}