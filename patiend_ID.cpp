#include<iostream>
using namespace std;
class patientqueue
{
    struct node{
        int patientID;
        node *next;
    }
    node *head;
    bool isempty()
    {
        return head==nullptr;
    }
    public:
    patientqueue()
    {
        head=nullptr;
    }
    void addemg(int id)
    {
        node *newnode=new node{id,head};
        head=newnode;
    }
    addreg(int id)
    {
        node *newnode=new node{id,nullptr}
        if(isempty())
        {
            head=newnode;
        }
        else
        {
            node *temp=head;
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }   
            temp->next=newnode;
        }
    }
    void insertAt(int id,int pos)
    {
        if(pos<=0)
        {
            addemg(id);
        }
        else
        {
            node *newnode=new node{id,nullptr};
            node *temp=head;
            for(int i=1;i<pos && temp!=nullptr;i++)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
    void deschargefirst()
    {
       node* temp=head;
       temp=temp->next;
       delete head;
       head=temp;
    }
    void dischargelast()
    {
        if(isempty())
        {
            cout<<"No patient in queue";
        }
        else
        {
            node* temp=head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            delete temp;
            return head;
        }
    }
    void dischargeAt(int position)
    {
        isempty()
        if(position==0)
        {
            deschargefirst();
        }
        else
        {
            node* temp=head;
            
            for(int i=1;i<position && temp!=nullptr;i++)
            {
                temp=temp->next;
                if(temp->next==nullptr)
                {
                    cout<<"Invalid position";
                }
                node *delnode=temp->next;
                temp->next=delnode->next;
                delete delnode;
            }            
        }
    }
    void search(int id)
    {
        node *temp=head;
        int pos=0;
        int c=-1;
        if(head->next!=nullptr)
        {
            while(temp!=nullptr)
            {
                if(temp->data==id)
                {
                    pos=c+1;
                    cout<<"Patient found at position "<<pos+1;
                }
                temp=temp->next;
                c++;
            }
        }
        if(c==-1)
        cout<<"NOT FOUND";
    }

    void update(int pos,int newid)
    {
        node *temp=head;
        for(int i=0;i<pos && temp!=nullptr;i++)
        {
            temp=temp->next;
        }
        if(temp!=nullptr)
        {
            temp->data=newid;
        }
        else
        {
            cout<<"Invalid position";
        }
    }
}PI;

int main()
{
    int c=1;
    while(c>0)
    {
        cout<<"1 - Display\t2 - Insert\t "
    }
}