#include<iostream>
using namespace std;
class node
{public:
    int data;
    node *link;
    node(int val)
    {
        data=val;
        link=nullptr;
    }
};
display(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<"NULL\n";

}
node* insertinbw(node *head,int val, int pos){
    node* temp=head;
    node *n=new node(val);
    if(head==NULL || temp->link==NULL)
    {
        head->link=n;
        return head;
    }
    if(pos==1)
    {
        n->link=head;
        return n;
    }
    for(int i=1;i<pos-1;i++)
    {
        if(temp->link==nullptr)
        {
            cout<<"INVALID POSITION";
            return head;
        }
        temp=temp->link;
    }
    n->link=temp->link;
    temp->link=n;
    return head;
}

node* insertatend(node* head,int val)
{
    node *n=new node(val);
    node *temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=n;
    return head;
}

node *deleteinbw(node *head,int pos)
{
    node *temp=head;
    for(int i=0;i<pos-1;i++)
    {
        if(temp->link==nullptr)
        {
            cout<<"INVALID POSITION\n";
            return head;
        }
        temp=temp->link;
    }
    node *delnode=temp->link;
    temp->link=temp->link->link;
    delete delnode;
    return head;
}

node* reversed(node* head)
{
    node* c=head,*p=NULL,*n=NULL;
    while(c!=nullptr)
    {
        n=c->link;
        c->link=p;
        p=c;
        c=n;
    }
    head=p;
    return head;
}

int main()
{
    node *n1=new node(10);   node* n2=new node(20);
    node *n3=new node(30);   node *n4=new node(40);
    n1->link=n2;    
    n2->link=n3;
    n3->link=n4;
    node *head=n1;
    display(n1);
    int p;
    cout<<"Enter a position\n";
    cin>>p;
    cout<<"AFTER INSERTING\n";
    node* y=insertinbw(head,100,p);
    display(y);
    if(p==1)
    head=y;
    node *z=insertatend(head,50);
    display(z);
    cout<<"AFTER DELETING\n";
    node *a=deleteinbw(head,1);
    display(a);
    cout<<"AFTER REVERSING\n";
    node *rev=reversed(head);
    display(rev);
    return 0;
}