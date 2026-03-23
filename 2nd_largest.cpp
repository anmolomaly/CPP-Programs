#include <iostream>
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
    int largest=arr[0];
    int second_largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    cout<<"THE SECOND LARGEST ELEMENT IS: "<<second_largest;
    return 0;
}