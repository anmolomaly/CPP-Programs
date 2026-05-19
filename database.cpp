//Overloading_[]
#include<iostream>
using namespace std;

class database{
    int data[10]={1,2,3,4,5,6,7,8,9,10};
    public:
    int operator[](int index){
        if(index<0 || index>9)
        {
            cout<<"Index out of bounds";
            return -1;
        }
        return data[index];
    }

};

int main()
{
    database db;
    int y=db.operator[](5);
    cout<<y;
    return 0;
}