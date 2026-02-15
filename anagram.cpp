using namespace std;
#include <iostream>
class anagram
{
    char a[100],b[100];
public:
    anagram()
    {
        for(int i=0;i<100;i++)
        {
            a[i]='\0';
            b[i]='\0';
        }
    }
    void check()
    {
        cout<<"Enter 2 words: ";
        cin>>a>>b;
        int a1[256]={0},b1[256]={0};
        for(int i=0;a[i]!='\0';i++)
        {
            a1[a[i]]++;
        }
        for(int i=0;b[i]!='\0';i++)
        {
            b1[b[i]]++;
        }
        
        bool flag=true;
        for(int i=0;i<256;i++)
        {
            if(a1[i]!=b1[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"The words are anagrams."<<endl;
        else
            cout<<"The words are not anagrams."<<endl;
    
}
}a;
int main()
{
    a.check();
    return 0;
}