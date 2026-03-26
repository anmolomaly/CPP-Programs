#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int v)
    {
        data=v;
        next=NULL;
    }
};



int main()
{
    node *n1=new node(10);
    node *n2=new node(20);
    node *n3=new node(30);
    node *n4=new node(40);
    node *n5=new node(50);
    node *n6=new node(60);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    node *s=n1;
    node *f=n1;
    while(f!=NULL && f->next!=NULL)
    {
        s=s->next;
        f=f->next->next;
    }
    cout<<"The middle element is: "<<s->data;
    return 0;
}