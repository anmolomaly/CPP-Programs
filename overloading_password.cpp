#include <iostream>
using namespace std;

class user{
    public:
    string password;
    user(String P)
    {
        Password=P;
    }
    bool operator==(user U)
    {
        return password==U.password;
    }
};

int main(){
    user obj("Pass");
    bool ans=obj.operator==();
    if(ans)
    {
        cout<<"Password is correct";
    }
    else
    {
        cout<<"Password is incorrect";
    }
}

