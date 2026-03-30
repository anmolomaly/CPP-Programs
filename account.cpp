#include <iostream>
using namespace std;

class account{
    public:
    int bal;
    account(int b)
    {
        bal=b;
    }

    account operator+(account obj)
    {
        return bal+obj.bal;
    }
};

int main()
{
    account a(1000);
    account b(2000);
    account sum=a+b;
    cout<<sum.bal;
}