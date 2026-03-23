#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER A NUMBER: ";
    cin>>n;
    if(n%10==7 || n%7==0)
    cout<<"BUZZ";
    else 
    cout<<"NOT BUZZ";
return 0;
}