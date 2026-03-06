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

int main()
{
    node* n1=new node(10);
    node* n2=new node(20);
    node * n3=new node(30);
    n1->next=n2;
    n2->next=n3;
    
        node* temp=n1;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
        return 0;
}


