using namespace std;
#include<iostream>
class linear_search
{
    int a[20],n;
    public:   
     linear_search()
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
    
    }
    void search()
    {
        int key;
        cout<<"Enter the element to be searched: ";
        cin>>key;
        for(int i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                cout<<"Element found at position "<<i+1<<endl;
                return;
            }
        }
        cout<<"Element not found in the array"<<endl;
    }
}ls;
int main()
{
    ls.getdata();
    ls.search();
    return 0;
}