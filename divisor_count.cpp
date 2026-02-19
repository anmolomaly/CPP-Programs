#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The divisors of the number " << n << " are: ";
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout << i << " ";
            c++;
        }
    }
    cout << "\nThe number of divisors of " << n << " is: " << c;
}