#include <iostream>
int main()
{
    std::cout<<"Enter 2 numbers:";
    int a,b;
    std::cin>>a>>b;
    std::cout<<"Enter an operator +,-,*,/,%:";
    char op;
    std::cin>>op;
    switch(op)
    {
        case '+':
            std::cout<<"Result:"<<a+b;
            break;
        case '-':
            std::cout<<"Result:"<<a-b;
            break;
        case '*':
            std::cout<<"Result:"<<a*b;
            break;
        case '%':
            if(b!=0)
                std::cout<<"Result:"<<a%b;
            else
                std::cout<<"Error: Division by zero!";
        case '/':
            if(b!=0)
                std::cout<<"Result:"<<a/b;
            else
                std::cout<<"Error: Division by zero!";
            break;
        default:
            std::cout<<"Invalid operator!";
    }
    return 0;
}