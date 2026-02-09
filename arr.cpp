#include <iostream>

int main()
{
    std::cout<<"Enter the size of array";
    int n;
    std::cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>nums[i];
    }
    int ans[2*n];
    int c=0;
    for(int i=0;i<2*n;i++)
    {
        ans[i]=nums[c];
        c++;
        if(c==n)
        c=0;
    }
    for(int i=0;i<2*n;i++)
    {
        std::cout<<" "<<ans[i];
    }
}