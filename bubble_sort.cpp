using namespace std;
#include <iostream>
class bubble_sort
{
    int a[20],n;
    public:   
     bubble_sort()
    {
        n=0;
        a[20]={0};
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
    void display()
    {
        cout<<"The sorted array is: ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}bs;

int main()
{
    bs.getdata();
    bs.sort();
    bs.display();
    return 0;
}
