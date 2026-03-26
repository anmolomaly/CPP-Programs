#include <iostream>
using namespace std;
class inventory
{
    string name [100];
    int quantity [100];
    double price[100];
    public:
    
    void getdata(int n)
    {
     for(int i=0;i<n;i++)
      {
        cout<<"Enter the name of item "<<i+1<<": ";
        cin>>name[i];
        cout<<"Enter the quantity of item "<<i+1<<": ";
        cin>>quantity[i];
        cout<<"Enter the price of single item "<<i+1<<": ";
        cin>>price[i];
      }
    }
    void display(int n)

    {
        for(int i=0;i<n;i++)
      {
        cout<<"Item: "<<"\t \t Quantity: "<<"\t \t Price: "<<"\t \t Total Price: "<<endl;
        cout<<name[i] <<"\t \t " <<quantity[i] <<"\t \t " <<price[i] <<"\t \t " <<quantity[i]*price[i]<<endl;
    }
} 
}i;

int main()
{
    int n;
    cout<<"Enter the number of items: ";    
    cin>>n; 
    i.getdata(n);
    i.display(n);
     return 0;
}