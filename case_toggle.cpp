#include <iostream>
using namespace std;
#include<cstring>

int main()
{
    char a[100];
    cout<<"ENTER A WORD: ";
    cin>>a;
    // for(int i=0;i<strlen(a);i++)
    // {
    //     if(a[i]>='a' && a[i]<='z')
    //     {
    //         a[i]=a[i]-'a'+'A';
    //     }
    //     else if(a[i]>='A' && a[i]<='Z')
    //     {
    //         a[i]=a[i]-'A'+'a';
    //     }
    // }
    for(int i=0;i<strlen(a);i++)
    {
        if(islower(a[i]))
        {
            a[i]=toupper(a[i]);
        }
        else
        {
            a[i]=tolower(a[i]);
        }
    }
    cout<<"The word with toggled case is: "<<a;
    return 0;
}