#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER THE SIZE OF ARRAY";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<n;k++)
                {
                    int t=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=t;
                }
                c++;
                n--;
            }
        }
    }
    cout<<"After removing the extra "<<c<<" duplicate numbers, the array we are left with is:\n";
    for(int i=0;i<n;i++)
    { if(i==0)
        cout<<"{ ";
        cout<<arr[i]<<" ";
        if(i==n-1)
        cout<<"}";
    }
    return 0;
}