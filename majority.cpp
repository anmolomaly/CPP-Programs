#include <iostream>
using namespace std;
int main()
{
    int n;  
    cout << "Enter the number of elements\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int c[n];
    for(int i=0;i<n;i++)
    {
        c[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c[i]++;
            }
        }
    }
    cout << "The majority element is:\n";
    for(int i=0;i<n;i++)
    {
        if(c[i]>=n/2)
        {
            cout << arr[i] << endl;
            break;
        }
    }
}
