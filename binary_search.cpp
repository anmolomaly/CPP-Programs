using namespace std;
#include<iostream>
class binary_search
{
    int a[20],n;
    int key;
    public:
     binary_search()
     {
         n=0;
     }
     void getdata()
     {
         cout<<"Enter the number of elements: ";
         cin>>n;
         cout<<"Enter the elements: ";
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
        cout<<"Enter the element to be searched: ";
        cin>>key;
     }
     void sort()
     {
         for(int i=0;i<n-1;i++)
         {
             for(int j=0;j<n-i-1;j++)
             {
                 if(a[j]>a[j+1])
                 {
                     int temp=a[j];
                     a[j]=a[j+1];
                     a[j+1]=temp;
                 }
             }
         }
     } 
    void search()
    {
        int s=0,e=n-1,mid;
        while(s<=e)
        {
            mid=(s+e)/2;
            if(a[mid]==key)
            {
                cout<<"Element found at position "<<mid<<endl;
                return;
            }
            else if(a[mid]<key)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        cout<<"Element not found in the array."<<endl;
    }    
}bs;

int main()
{
    bs.getdata();
    bs.sort();
    bs.search();
    return 0;
}
