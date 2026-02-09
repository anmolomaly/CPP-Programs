using namespace std;
#include <iostream>
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int s=n;s>i;s--)
        {
                cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
    cout<<endl;
    } 
}