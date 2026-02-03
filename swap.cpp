#include <iostream>
int main()
{
    int a,b;
    std::cout <<"Enter two numbers: ";
    std::cin >>a>>b;
    int t=0;
    std::cout <<"The original values are: "<<a<<" "<<b<<std::endl;
    t=a;
    a=b;
    b=t;
    std::cout <<"The swapped values are: "<<a<<" "<<b;
    return 0;
}