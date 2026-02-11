using namespace std;
#include <iostream>
class perfect_number
{
    int n,s,no;
    public:
    perfect_number()
    {
        n=0;
        s=0;
        no=0;
    }
    void get_data()
    {
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    }
    void display()
    {
    if(s==n)
    {
        cout<<n<<" is a perfect number.";
    }
    else
    {
        cout<<n<<" is not a perfect number.";
    }
}
};
int main()
{
    perfect_number p;
    p.get_data();
    p.display();
    return 0;
}
