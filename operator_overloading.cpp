//operator overloading
#include <iostream>
using namespace std;

class test{
    int x;
    public :
    test(int x=10){
        this->x=x;
    }
    test operator++(){
        test a;
        a.x=x+1;
        return a;
    }
    void display(){
        cout<<x;
    }
};

int main(){
    test t(50);
    test t1=++t;
    test t11;
    t11=t;
    test t12 =++t11;
    t.display();
    cout<<endl;
    t1.display();
    cout<<endl;
    t11.display();
    cout<<endl;
    t12.display();
}