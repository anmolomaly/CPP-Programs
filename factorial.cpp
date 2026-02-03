#include <iostream>
int main()
{
    int n;
    std::cout <<"Enter a number to find its factorial: ";
    std::cin>>n;
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    std::cout <<"The factorial of "<<n<<" is: "<<f<<std::endl;
}