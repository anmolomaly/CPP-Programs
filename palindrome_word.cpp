#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string n;
    cout<<"ENTER A WORD: ";
    cin>>n;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]!=n[n.length()-i-1])
        {
            cout<<"The word is not a palindrome.";
            return 0;
        }
    }
    cout<<"The word is a palindrome.";
    return 0;
}