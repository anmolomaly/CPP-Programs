using namespace std;
#include<iostream>
class selection_sort
{
    int a[20],n;
    public:   
     selection_sort()
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
    void sort()
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    
    }
    void display()
    {
        cout<<"The sorted array is: ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    
};

int main()
{
    selection_sort ss;
    ss.getdata();
    ss.sort();
    ss.display();
    return 0;
}