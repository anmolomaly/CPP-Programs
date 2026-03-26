#include<iostream>
class stack{
    pritected:
    int arr[100];
    int top=-1;
    public:
    stack()
    {
        top=-1;
    }
    void push(int x)
    {
        arr[++top]=x;
    }
    int pop()
    {
        if(top=-1){
            cout<<"Underflow";
            return -999;
        }
        else
        {
        cout<<arr[top];
            return top--
    }
        
    }
    void display()
    {
        for(int i=top;i>=0;i++)
        cout<<arr[i];
    }
};

class browser : public stack
{
    public:
    void VisitPage(int page)
    {
        push(page);
    }
};

class SecuredBrowser : public browser
{
    public:
    void visitSecuredPage(int secPage)
    {
        VisitPage(page);
    }
};

class undoStack
{

};
class redoStack{

};

class EditorStack: public undoStack, public redoStack
{

};

int main()
{   
browser br;
bs.VisitPage(10);
bs.VisitPage(20);
bs.display();
SecuredBrowser SB;
SB.visitSecuredPage(15);
SB.display();
return 0;
}