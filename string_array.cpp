#include<iostream>
#define MAX 100
using namespace std;
int main()
{
    string name[MAX];
    int n;
    cout<<"How many student's name you want to store:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the name of student "<<i+1<<": ";
        cin>>name[i];
    }

    for(int i=0;i<n;i++){
        cout<<"\n Name "<<i<<": "<<name[i];
    }
    return 0;
}2
