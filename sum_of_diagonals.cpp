#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"ENTER THE SIZE OF SQUARE MATRIX";
    cin>>n;
    int arr[n][n];
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            s1+=arr[i][j];
            if(i==n-j-1)
            s2+=arr[i][j];
        }
    }
    cout<<"Sum of primary diagonal is "<<s1<<" and secondary is "<<s2<<" and the sum of both diagonals is "<<s1+s2;

    return 0;
}