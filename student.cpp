#include <iostream>
using namespace std;
class student
{
    public:
    int rollno,tm,tmm;
    string name;
    float p;
    char g;
    student()
    {
        tm=0;
        tmm=0;
        name="";
        rollno=0;
        p=0.0;
        g=' ';
    }
    void input(int marks[],int a,int tma[]);
    void cal(int no,int marks[])
    {
    for(int i=0;i<no;i++)
    {
        tm+=marks[i];
    }
    p=(float)tm/tmm*100;
    if(p>=90)
    {
        g='O';
    }
    else if(p>=80)
    {
        g='A';
    }
    else if(p>=70)
    {
        g='B';
    }
    else if(p>=60)
    {
        g='C';
    }
    else if(p>=50)
    {
        g='D';
    }
    else
    {
        g='F';
    }
   }  
    void display(int marks[],int no,int tma[])
    {
        cout<<"Name: "<<name<<"\n";
        cout<<"Roll No: "<<rollno<<"\n";
        cout<<"Marks Obtained: "<<tm<<"\n";
        cout<<"Total Marks: "<<tmm<<"\n";
        cout<<"Grade: "<<g<<"\n";
        cout<<"Percentage: "<<p<<"\n";
        cout<<"\n---------------------------------------------\n";
    }
};
void student::input(int marks[],int a,int tma[])
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter rollno: ";
    cin>>rollno;
    cout<<"Enter the marks of "<<a<<" of subjects: ";
    for(int i=0;i<a;i++)
    {
        int m;
        cin>>marks[i];
    }
    cout<<"Enter the total marks of each subject: ";
    for(int i=0;i<a;i++)
    {
        cin>>tma[i];
        tmm+=tma[i];
    }
}
int no;
int marks[100];
int tma[100];
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number os subjects for student "<<i+1<<": ";
        cin>>no;
        marks[no];
        tma[no];
        s[i].input(marks,no,tma);
        s[i].cal(no,marks);
        s[i].display(marks,no,tma);
    }
}