#include<iostream>
using namespace std;

class student
{
    int marks;
    public:
    student(int m){
        marks=m;
    }
    friend ostream&operator<<(ostream &out, student s){
        out<<"MARKS: "<<s.marks;
        return out;
    }
};

int main()
{
    student s(95);
    cout<<s;
}