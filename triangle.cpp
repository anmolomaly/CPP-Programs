using namespace std;
#include <iostream>
int main() {
    int n;
    cout<<"Enter the size";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }    return 0;
}