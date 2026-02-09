#include <iostream>
#include <string>
int main()
{
    std::cout<<"Enter a number to check its binary equivalent: ";
    int num;
    std::cin>>num;
    std::string bnum;
    int no=num;
    while(num>0)
    {
        int rem=num%2;
        bnum=std::to_string(rem)+bnum;
        num=num/2;
    }
    std::cout<<"The binary equivalent of "<<no<<" is: "<<bnum<<std::endl;
    return 0;
}