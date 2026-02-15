using namespace std;
#include<iostream>

class frequency
{
    int a[100],n,c;
public:
    void getdata(int *c)
    {
        cout<<"Enter the number of elements: ";
        cin>>n;
        int n1=n,n2=n;
        while(n1>0)
        {
            (*c)++;
            n1/=10;
        }
        cout<<"The number of digits is: "<<(*c)<<endl;
        for(int i=(*c)-1;i>=0;i--)
        {
            a[i]=n2%10;
            n2/=10;
        }
    }
    void count(int *c)
    {
        int freq[100]={0};
        for(int i=0;i<(*c);i++)
            {
                for(int j=0;j<(*c);j++)
                {
                    if(a[i]==a[j])
                        freq[i]++;
                }
                cout<<"The frequency of "<<a[i]<<" is: "<<freq[i]<<endl;
            }
    }
}f;

int main()
{
    int c=0;
    f.getdata(&c);
    f.count(&c);
    return 0;
}