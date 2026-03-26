//WAP to add element 16 at pos 3 and delete the 1st element i.e 20 and print the sum of all 5 elements.
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *link;
    node(int val)
    {
        data=val;
        link=nullptr;
    }
};

node *insert(node* head,int val,int pos)
{
    node *temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->link;
    }
    node *n=new node(val);
    n->link=temp->link;
    temp->link=n;
    return head;
}

node *deleted(node *head)
{
    node *temp=head;
    head=temp->link;
    delete temp;
    return head;
}

void display(node *head)
{
    node *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<"NULL\n";
}

int sum(node *head)
{
    int su=0;
    node *temp=head;
    while(temp!=nullptr)
    {
        su=su+temp->data;
        temp=temp->link;
    }
    return su;
}

int main()
{
    node* n1=new node(20);  node *n2=new node(30);
    node *n3=new node(40);  node *n4=new node(50);
    node *n5=new node(60);
    n1->link=n2;    n2->link=n3;
    n3->link=n4;    n4->link=n5;
    node *head=n1;
    node *x=insert(head,16,3);
    display(x);
    head=x;
    node *y=deleted(head);
    display(y);
    head=y;
    int z=sum(head);
    cout<<"SUM OF ELEMENTS IS: "<<z<<"\n\n";

    int arr[5]={20,100,200,300,400};
    arr[0]=0;
    for(int i=0;i<2;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[1]=16;
    int s=0;
    for(int i=0;i<5;i++)
    {
        s=s+arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<"\nSum of array is: "<<s;
}