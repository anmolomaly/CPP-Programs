#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void display(node* head);
node* insertattail(node* head, int x);
int main()
{
    node* n1=new node(10);
    node* n2=new node(20);
    node * n3=new node(30);
    n1->next=n2;
    n2->next=n3;
    cout<<"Before inserting at end: "<<endl;
    display(n1);
    int x;
    cin>>x;
    cout<<"\nAfter inserting at end: "<<endl;
    node* z=insertattail(n1,x);
    display(z);
        return 0;
}
void display(node* head)
{
     node* temp=head;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        {
            cout<<temp->data;
        }
        else
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
}
node* insertattail(node* head, int x)
{
    node * n=new node(x);
    if(head==NULL)
    {
        return n;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    return head;
}