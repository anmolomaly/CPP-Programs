#include <iostream>
using namespace std;

class abc{
    public:
    void display(){
        cout<<"HELLO ";
    }
    void display(int n)
    {
        cout<<"WORLD "<<n;
    }

};

int main()
{
    abc a;
    a.display();
    a.display(5);
}