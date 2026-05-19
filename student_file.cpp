#include <iostream>
#include<fstream>
#include<cstring>
using namespace std;

class student{ //
    public:
    int id;
    string name;
    float marks;

    void input()
    {
        cout<<"Enter student id";
        cin>>id;
        cout<<"Enter Student name";
        cin>>name;
        cout<<"Enter marks";
        cin>>marks;
    }

    void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

void addstd()
{
    student s;
    ofstream file("students.txt", ios::app);//ios::app is used to reduce the overwriting
    s.input();
    file.write((char*)&s, sizeof(s));  //sent in the mode of character data
    file.close();      //to close the file so it doesn't use memory unnecessarily
}
void viewstudent(){
    student s;
    ifstream file("student.txt");
    while(file.read((char*)&s, sizeof(s)))
    {
        cout<<"ID: "<<s.id<<endl;
        cout<<"Name: "<<s.name<<endl;
        cout<<"Marks: "<<s.marks<<endl;
    }
    file.close();
}

void search(int id){
    student s;
    int c=0;
    ifstream file("student.txt");
    while(file.read((char*)&s, sizeof(s))){
        if(s.id==id)
        {
            s.display();
            c=1;
            break;
        }
        file.close();
    }
    if(c==0)
    {
        cout<<"Student not found";
    }
}

int main(){
    int ch;
    cout<<"1. Add Student\n";
    cout<<"2. View Student\n";
    cout<<"3. Search Student\n";
    cout<<"0. Exit\n";
    cin>>ch;
    student s;
    // while(ch!=0){
        switch(ch){
            case 1: 
                addstd();
                break;
            case 2:
            viewstudent();
            break;
            case 3:
            int id;
            cout<<"Enter student id";
            cin>>id;
            search(id);
            break;
            case 0:
                cout<<"Exiting...";
                break;
            default:
                cout<<"Invalid option";
        }
        cout<<"Enter 0 to exit and 1 to add again:  ";
        cin>>ch;
        return 0;
    }
