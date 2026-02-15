using namespace std;
#include <iostream>
 class triangle
 {
   int a,b,c;
   public:
   void getdata()
   {
     cout<<"Enter the sides of triangle: ";
     cin>>a>>b>>c;
   }
   void display()
   {
    if(a<b+c && b<a+c && c<a+b)
    {
    if(a==b && b==c)
        cout<<"Equilateral Triangle"<<endl;
    else if(a==b || a==c || b==c)
        cout<<"Isosceles Triangle"<<endl;
    else if (a*a==(b*b)+(c*c) || b*b==(a*a)+(c*c) || c*c==(a*a)+(b*b))
        cout<<"Right-angle Triangle"<<endl;
    else
        cout<<"Scalene Triangle"<<endl;
    }
    else
        cout<<"Triangle is not possible"<<endl;
   }
 }t;

 int main()
 {
   triangle t;
   t.getdata();
   t.display();
   return 0;
 }
