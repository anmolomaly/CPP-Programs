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
node* deleteatstart(node* head);
int main()
{
    node* n1=new node(10); node* n2=new node(20);
    node* n3=new node(30); node *n4=new node(40);
    node *n5=new node(50); node *n6=new node(60);
    node *n7=new node(70); node *n8=new node(80);
    node *n9=new node(90); node *n10=new node(100);
    n1->next=n2; n2->next=n3; n3->next=n4;
    n4->next=n5; n5->next=n6; n6->next=n7;
    n7->next=n8; n8->next=n9; n9->next=n10;
    cout<<"Before deletion at end: "<<endl;
    display(n1);
    node* y=deleteatstart(n1);
    cout<<"After deletion at start: "<<endl;
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

node* deleteatstart(node *head)
{
    node* temp=head;
    head=head->next;
    delete temp;
    return head;
}