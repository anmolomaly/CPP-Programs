#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"ENTER THE SHAPE OF MATRIX";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    n=n+m;
    m=n-m;
    n=n-m;
    int arr2[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr2[i][j]=arr[j][i];
        }
    }
    cout<<"Transpose of matrix is:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}