#include <iostream>
using namespace std;

class HCF {
public:
    int getHCF(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

class LCM {
public:
    int getLCM(int a, int b, int hcf) {
        return (a * b) / hcf;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    HCF h;
    int hcf = h.getHCF(num1, num2);

    LCM l;
    int lcm = l.getLCM(num1, num2, hcf);

    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}