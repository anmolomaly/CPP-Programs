# include <iostream>
class person
{
  char name[100];
  int age;
  public:
  person()
  {
    name[0]='\0';
    age=0;
  }
  void getdata();
  void display()
  {
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Age: "<<age<<std::endl;
  }  
};
void person::getdata()
{
  std::cout<<"Enter name: ";
  std::cin>>name;
  std::cout<<"Enter age: ";
  std::cin>>age;
}

int main()
{
  person p;
  p.getdata();
  p.display();
  return 0;
}