using namespace std;
#include<iostream>

class sum
{
    int a,sum=0;
    public:
    void getnum()
    {
        cout<<"Enter a number: ";
        cin>>a;
    }
    void cal()
    {
        for(int i=2;i<=a;i=i+2)
        {
            sum=sum+i;
        }
    }
    void display()
    {
        cout<<"The sum is: "<<sum<<endl;
    }
}s;

int main()
{
    s.getnum();
    s.cal();
    s.display();
    return 0;
}