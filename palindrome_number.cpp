// Palindrome number
#include <iostream>
int main()
{
    int n,rev=0;
    std::cout<<"Enter a number: ";
    std::cin>>n;
    int no=n;
    while(n>0)
    {
        rev=10*rev+n%10;
        n=n/10;
    }
    if(rev==no)
        std::cout<<"The number is Palindrome";
    else
        std::cout<<"The number is not palindrome. The reverse of given number is: "<<rev;
    return 0;
}