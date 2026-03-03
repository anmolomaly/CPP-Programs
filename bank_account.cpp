#include <iostream>
using namespace std;
#include <string>
class bank_account{
    string name;
    long accno;
    double balance;
    int pin;
    public:
    bool validatepin(int p){
        if(p == pin){
            return true;
        } else {
            return false;
        }
    }
    bank_account(string n, long a, double b){
        name = n;
        accno = a;
        if(b < 0){
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
            balance = 0;
        } else {
            balance = b;
        }
    }
    string getaccountholdername(){
        return name;
    }
    long getaccountnumber(){
        return accno;
    }
    double getbalance(){
        return balance;
    }
    void deposit(double amt);
    void withdraw(double amt);
    void display(){
        cout << "Account Holder's Name: " << name << endl;
        cout << "Account Number: " << accno << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

void bank_account::deposit(double amt){
    if(amt > 0){
        balance += amt;
        cout << "Deposited: $" << amt << endl;
    } else {
        cout << "Deposit amount must be positive." << endl;
    }
}

void bank_account::withdraw(double amt){
    if(amt > 0 && amt <= balance){
        balance -= amt;
        cout << "Withdrawn: $" << amt << endl;
    } else if(amt > balance){
        cout << "Insufficient funds." << endl;
    } else {
        cout << "Withdrawal amount must be positive." << endl;
    }
}

int main() {
    string name;
    long accno;
    double balance;
    cout << "Enter account holder's name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> accno;
    cout << "Enter initial balance: ";
    cin >> balance;
    bank_account BA(name, accno, balance);
    int ch;
    cin >> ch;
    do{
    switch(ch){
        cout << "Choose an option:\n1. Deposit\n2. Withdraw\n3. Display Account Details\n0. Exit\n";
        case 1: {
            double amt;
            cout << "Enter amount to deposit: ";
            cin >> amt;
            BA.deposit(amt);
            break;
        }
        case 2: {
            double amt;
            cout << "Enter amount to withdraw: ";
            cin >> amt;
            BA.withdraw(amt);
            break;
        }
        case 3: {
            BA.display();
            break;
        }
        case 0: {
            cout << "Exiting..." << endl;
            break;
        }
        default:
        cout << "Invalid option." << endl;
        BA.display();
    }
    int cho;
    cout<<"Enter 0 to exit and 1 to go to ATM System";
    cin>>cho;
    }while(cho);
    return 0;
 }
