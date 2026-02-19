#include <iostream>
using namespace std;
int main()
{
    int s=0,c=1;
    int n;
    cout << "Enter a number to print its Pascal's Triangle: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(s=0;s<n-i-1;s++)
        {
            cout << "  ";
        }
        for(int j=0;j<n;j++)
        {
            if(j==0)
            {
                c=1;
                cout << c << "   ";
            }
            else{
                c=c*(i-j+1)/j;
                if(c>0)
                {
                    cout << c << "   ";
                }
            }
        }
        cout << "\n";   
    }
}