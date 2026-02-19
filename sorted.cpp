#include <iostream>
using namespace std;
void main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    int x=isSorted(arr, n);
}
int isSorted(int arr[], int n)
{
   int c=0;
   for(int i=0;i<n-1;i++)
   {
    if((arr[i]<arr[i+1] && c==0) || (arr[i]<=arr[i+1] && c!=0))
    {
        c++;
    }
   }
   if(c==n-1)
   {    
    cout << "The array is sorted in ascending order " << c << endl;
   }
   else if(c==0)
   {
    cout << "The array is sorted in descending order " << c << endl;
   }
   else
   {
    cout << "The array is not sorted " << c << endl;
   }
}