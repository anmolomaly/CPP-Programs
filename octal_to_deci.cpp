#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int octal;
    cout << "Enter an octal number: ";
    cin >> octal;

    int decimal = 0, i = 0;

    while (octal > 0) {
        int digit = octal % 10;
        decimal += digit * pow(8, i);
        octal /= 10;
        i++;
    }

    cout << "Decimal: " << decimal << endl;
    return 0;
}
