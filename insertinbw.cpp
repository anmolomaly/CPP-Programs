#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void display(node* head);
node* insertinbw(node* head, int x, int pos);
int main()
{
    node* n1=new node(10);
    node* n2=new node(20);
    node* n3=new node(30);
    node *n4=new node(40);
    node *n5=new node(50);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    cout<<"Before inserting in between: "<<endl;
    display(n1);
    int x,pos;
    cout<<"Enter the position and value: ";
    cin>>pos>>x;
    cout<<"After inserting in between: "<<endl;
    node* y=insertinbw(n1,x,pos);
    display(y);
    return 0;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        {
            cout<<temp->data << " \n";
        }
        else
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
}
node* insertinbw(node* head, int x, int pos)
{
    node* n=new node(x);
    if(pos==1)
    {
        n->next=head;
        return n;
    }
    node* temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
    return head;
}