#include <iostream>
using namespace std;
class ATM
{
    int pin;
    long accno;
    string name;
    double balance;
    public:
    ATM(string n, long a, int p, double b){
       name = n;
       accno = a;
       pin = p;
       balance = b;
   }
    bool validatepin(int p){
        if(p == pin){
            return true;
        } else {
            return false;
        }
    }
    void changepin(int p){
        cout<<"Enter old pin";
        pin = p;
    }
    void deposit(double amt){
        if(amt > 0){
            balance += amt;
        }
    }
    void withdraw(double amt){
        if(amt > 0 && amt <= balance){
            balance -= amt;
        }
    }  
    void display(){
        cout << "Account Holder's Name: " << name << endl;
        cout << "Account Number: " << accno << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};
int main()
{
    cout<<"Enter the name";
    string n;
    long a;
    int p;
    double b;
    cin>>n;
    cout<<"Enter the account number";
    cin>>a;
    cout<<"Enter the pin";
    cin>>p;
    cout<<"Enter the balance";
    cin>>b;
    ATM atm(n, a, p, b);
    
    int cho=0;
    do{
        cout << "Choose an option:\n1. Deposit\n2. Withdraw\n3. Display Account Details\n4. Change Pin\n0. Exit\n";
        int ch;
    cin>>ch;
    switch(ch){
        case 1: {
            double amt;
            cout << "Enter amount to deposit: ";
            cin >> amt;
            atm.deposit(amt);
            break;
        }
        case 2: {
            double amt;
            cout << "Enter amount to withdraw: ";
            cin >> amt;
            atm.withdraw(amt);
            break;
        }
        case 3: {
            atm.display();
            break;
        }
        case 4: {
            int p;
            cout << "Enter new pin: ";
            cin >> p;
            atm.changepin(p);
            break;
        }
        case 0: {
            cout << "Exiting..." << endl;
            break;
        }
        default:
        cout << "Invalid option." << endl;
        atm.display();
    }
    cout<<"Enter 0 to exit and 1 to go to ATM System:  ";
    cin>>cho;
    }while(cho);
    return 0;
}
