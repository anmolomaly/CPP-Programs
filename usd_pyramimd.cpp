using namespace std;
#include <iostream>
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int s=i;s<n;s++)
        {
                cout<<"  ";
        }
        for(int j=2*i-1;j>=1;j--)
        {
            cout<<"* ";
        }
    cout<<endl;
    } 
}