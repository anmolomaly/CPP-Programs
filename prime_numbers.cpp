#include <iostream>
int main()
{
    std::cout<<"Enter 2 numbers";
    int a,b;
    std::cin>>a>>b;
    int c=0;
    for(int i=a+1;i<b;i++)
    {
        c=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==0)
        std::cout<<i<<" ";
    }
    return 0;
}