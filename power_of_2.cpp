#include <iostream>
 int main()
{
    int N; 
    std::cin >> N;
     int no=N;
int c=0;
while(no>1)
{
  if(no%2!=0)
  {
    c++;
    no=no/2;
  }
  else
  no=no/2;
}
if(c>0)
printf("%d cannot be expressed as power of 2.",N);
else
  printf("%d is a number that can be expressed as power of 2.",N);
}
